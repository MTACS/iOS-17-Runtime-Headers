
@protocol CALNTravelAdvisoryDescriptionGenerator <NSObject>

@required

- (NSString *)travelAdvisoryDescriptionOfType:(unsigned long long)arg1 hypothesis:(EKTravelEngineHypothesis *)arg2 location:(NSString *)arg3;

@end
