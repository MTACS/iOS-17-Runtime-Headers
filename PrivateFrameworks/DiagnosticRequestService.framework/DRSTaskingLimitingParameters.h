
@interface DRSTaskingLimitingParameters : NSObject {
    unsigned long long  _acceptedConfigCountCap;
    double  _taskingHysteresisInterval;
}

@property (nonatomic, readonly) unsigned long long acceptedConfigCountCap;
@property (nonatomic, readonly) double perTeamTaskingHysteresisInterval;
@property (nonatomic, readonly) double taskingHysteresisInterval;

+ (id)_customerParameters;
+ (id)_disabledParameters;
+ (id)_internalParameters;
+ (id)_seedParameters;
+ (id)defaultDeviceParameters;
+ (id)parametersForPlatform:(unsigned char)arg1 isInternal:(bool)arg2 isSeed:(bool)arg3 isCarrier:(bool)arg4 taskingIsEnabled:(bool)arg5;

- (unsigned long long)acceptedConfigCountCap;
- (id)initWithAcceptConfigCountCap:(unsigned long long)arg1 taskingHysteresisInterval:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)perTeamTaskingHysteresisInterval;
- (double)taskingHysteresisInterval;

@end
