
@interface CloudSubscriptionFeatures.GeoClassificationInfo : NSObject <NSSecureCoding> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  cacheTill;
    void featureKey;
    void geoClassification;
    void isBeta;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool expired;
@property (nonatomic, readonly) NSString *featureKey;
@property (nonatomic, readonly) unsigned long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)expired;
- (id)featureKey;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)status;

@end
