
@interface SmartReplies.ActionETADataSource : NSObject <GEONavigationListenerDelegate> {
    void geoListener;
    void geoQueue;
    void latestTimeAndPositionFromDestination;
    void latestTransportType;
}

- (void).cxx_destruct;
- (id)init;
- (void)navigationListener:(id)arg1 didChangeNavigationState:(unsigned long long)arg2 transportType:(int)arg3;
- (void)navigationListener:(id)arg1 didUpdatePositionFromDestination:(struct { double x1; double x2; })arg2;

@end
