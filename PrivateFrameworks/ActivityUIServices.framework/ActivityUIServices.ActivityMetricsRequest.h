
@interface ActivityUIServices.ActivityMetricsRequest : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    void _ambientMetrics;
    void _lockScreenMetrics;
    void _systemApertureMetrics;
}

@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *ambientMetrics;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *lockScreenMetrics;
@property (nonatomic, retain) _TtC18ActivityUIServices28SystemApertureMetricsRequest *systemApertureMetrics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ambientMetrics;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLockScreenMetrics:(id)arg1 systemApertureMetrics:(id)arg2;
- (id)initWithLockScreenMetrics:(id)arg1 systemApertureMetrics:(id)arg2 ambientMetrics:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lockScreenMetrics;
- (void)setAmbientMetrics:(id)arg1;
- (void)setLockScreenMetrics:(id)arg1;
- (void)setSystemApertureMetrics:(id)arg1;
- (id)systemApertureMetrics;

@end
