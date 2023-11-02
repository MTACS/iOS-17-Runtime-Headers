
@interface EKTimeZone : NSObject <NSCopying> {
    NSTimeZone * _nsTimeZone;
}

@property (nonatomic, retain) NSTimeZone *nsTimeZone;

+ (id)timeZoneWithNSTimeZone:(id)arg1;
+ (id)timeZoneWithName:(id)arg1;

- (void).cxx_destruct;
- (id)NSTimeZone;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithNSTimeZone:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)arg1;
- (id)nsTimeZone;
- (double)secondsFromGMTForAbsoluteTime:(double)arg1;
- (void)setNsTimeZone:(id)arg1;

@end
