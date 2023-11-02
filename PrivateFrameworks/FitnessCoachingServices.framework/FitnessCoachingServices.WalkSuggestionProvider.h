
@interface FitnessCoachingServices.WalkSuggestionProvider : NSObject <FITypicalDayActivityModelDelegate> {
    void dateProvider;
    void healthStore;
}

- (void).cxx_destruct;
- (id)currentCalendar;
- (id)currentDate;
- (bool)enumerateActivitySummariesFromDateComponents:(id)arg1 toDateComponents:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (id)firstOnWristDateToday;
- (id)init;

@end
