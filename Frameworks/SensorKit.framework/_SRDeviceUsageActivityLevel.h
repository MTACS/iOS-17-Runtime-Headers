
@interface _SRDeviceUsageActivityLevel : NSObject <NSSecureCoding, SRSampleExporting> {
    long long  _activityLevel;
    double  _duration;
}

@property long long activityLevel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)activityLevelWithLevel:(long long)arg1 duration:(double)arg2;
+ (bool)supportsSecureCoding;

- (long long)activityLevel;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setActivityLevel:(long long)arg1;
- (void)setDuration:(double)arg1;
- (id)sr_dictionaryRepresentation;

@end
