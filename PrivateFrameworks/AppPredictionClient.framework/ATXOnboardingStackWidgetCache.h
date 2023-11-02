
@interface ATXOnboardingStackWidgetCache : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _cacheUpdateDate;
    NSDictionary * _descriptorToAppLaunchData;
    NSNumber * _hasiCloudFamily;
}

@property (nonatomic, readonly) NSDate *cacheUpdateDate;
@property (nonatomic, readonly) NSDictionary *descriptorToAppLaunchData;
@property (nonatomic, readonly) NSNumber *hasiCloudFamily;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cacheUpdateDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptorToAppLaunchData;
- (void)encodeWithCoder:(id)arg1;
- (id)hasiCloudFamily;
- (id)initWithAppLaunchDictionary:(id)arg1;
- (id)initWithAppLaunchDictionary:(id)arg1 cacheUpdateDate:(id)arg2 hasiCloudFamily:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
