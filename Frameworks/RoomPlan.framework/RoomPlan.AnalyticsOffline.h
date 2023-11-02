
@interface RoomPlan.AnalyticsOffline : RoomPlan.Analytics {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  offlineGenerationTimeStart;
    void queue;
}

- (void).cxx_destruct;
- (id)init;

@end
