#include "tour_plan.h"

TourPlan* plan_createTour(ChildDataMgmt *cdm){
  return 0;
}

/**
 * Prints the tour plan to the console
 * (hint: check the assignment description for the proper format)
 */
void plan_print(TourPlan *plan){

}

/**
 * Frees memory allocated by the plan (and its child elements)
 * (hint: some structure contain lists, you already implemented a list cleanup)
 */
void plan_delete(TourPlan *plan){

}

/**
 * Calculates the number of presents a kid receives based on how well he or she behaved
 * (hint: look at the test case to understand the calculation)
 */
int plan_calc_presents(double goodness){
  int presents = 10 * goodness - 5;
  if (presents < 0) {
    presents = 0;
  }
  else if (presents > 5) {
    presents = 5;
  }
  return presents;
}
