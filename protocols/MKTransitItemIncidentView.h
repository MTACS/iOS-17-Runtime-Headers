
@protocol MKTransitItemIncidentView <NSObject>

@required

- (long long)cellPosition;
- (void)configureWithIncident:(id <GEOTransitIncident>)arg1 referenceDate:(NSDate *)arg2 shouldShowImage:(bool)arg3 inSiri:(bool)arg4;
- (void)configureWithIncidentMessage:(id <GEOTransitRoutingIncidentMessage>)arg1 referenceDate:(NSDate *)arg2 shouldShowImage:(bool)arg3 inSiri:(bool)arg4;
- (void)configureWithMessage:(NSString *)arg1 incident:(id <GEOTransitIncident>)arg2 referenceDate:(NSDate *)arg3 shouldShowImage:(bool)arg4 inSiri:(bool)arg5;
- (bool)padBottom;
- (void)setCellPosition:(long long)arg1;
- (void)setPadBottom:(bool)arg1;

@end
