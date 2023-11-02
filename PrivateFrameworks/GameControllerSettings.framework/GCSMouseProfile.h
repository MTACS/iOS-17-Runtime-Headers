
@interface GCSMouseProfile : NSObject <GCSJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    double  _trackingSpeed;
    bool  _useLinearTracking;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) <GCSJSONObject> *jsonObject;
@property (nonatomic, readonly) double trackingSpeed;
@property (nonatomic, readonly) bool useLinearTracking;

+ (id)defaultIdentifier;
+ (id)newDefaultProfile;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 trackingSpeed:(double)arg2 useLinearTracking:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObject:(id)arg1;
- (id)jsonObject;
- (void)setTrackingSpeed:(double)arg1;
- (double)trackingSpeed;
- (bool)useLinearTracking;

@end
