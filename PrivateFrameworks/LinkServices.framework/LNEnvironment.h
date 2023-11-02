
@interface LNEnvironment : NSObject <NSCopying, NSSecureCoding> {
    NSCalendar * _calendar;
    CLLocation * _currentLocation;
    NSString * _localeIdentifier;
    NSMutableDictionary * _locationAuthorizationStatus;
    NSTimeZone * _timeZone;
}

@property (nonatomic, copy) NSCalendar *calendar;
@property (nonatomic, copy) CLLocation *currentLocation;
@property (nonatomic, readonly, copy) NSString *localeIdentifier;
@property (nonatomic, retain) NSMutableDictionary *locationAuthorizationStatus;
@property (nonatomic, copy) NSTimeZone *timeZone;

+ (id)defaultEnvironment;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentLocation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)localeIdentifier;
- (id)locationAuthorizationStatus;
- (bool)locationAuthorizationStatusForBundleIdentifier:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCurrentLocation:(id)arg1;
- (void)setLocationAuthorizationStatus:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (id)trimLocation:(id)arg1 atKeyPath:(id)arg2 againstTCCWithBundleIdentifier:(id)arg3;

@end
