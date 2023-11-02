
@interface ATXProtectedCorrelatedEventsData : NSObject {
    bool  canUpdateReturnIndex;
    NSMutableArray * correlatedEvents;
    bool  executedCorrelation;
    unsigned long long  typeBEventDataReturnIndex;
}

- (void).cxx_destruct;

@end
