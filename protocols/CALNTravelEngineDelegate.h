
@protocol CALNTravelEngineDelegate <NSObject>

@required

- (void)travelEngine:(id <CALNTravelEngine>)arg1 authorizationChanged:(bool)arg2;
- (void)travelEngine:(id <CALNTravelEngine>)arg1 eventSignificantlyChangedWithEventExternalURL:(NSString *)arg2;
- (void)travelEngine:(id <CALNTravelEngine>)arg1 receivedHypothesis:(EKTravelEngineHypothesis *)arg2 eventExternalURL:(NSString *)arg3;

@end
