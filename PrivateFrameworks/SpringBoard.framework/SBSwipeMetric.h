
@interface SBSwipeMetric : SBAnalyticsStateMachineEventHandler {
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocation;
    long long  _interfaceOrientation;
    double  _timestampDelta;
}

- (id)init;

@end
