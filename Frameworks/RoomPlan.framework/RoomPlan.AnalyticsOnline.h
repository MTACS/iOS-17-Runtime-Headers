
@interface RoomPlan.AnalyticsOnline : RoomPlan.Analytics {
    void arframeDeltaTimeArray;
    void arframeLastTimeInterval;
    void errorType;
    void keyframeDeltaTimeArray;
    void keyframeLastTimeInterval;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  launchTimeStart;
    void onlineFloorPlanUpdateDeltaTimeArray;
    void onlineFloorPlanUpdateLastTimeInterval;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  onlineScanTimeStart;
    void queue;
}

- (void).cxx_destruct;
- (id)init;

@end
