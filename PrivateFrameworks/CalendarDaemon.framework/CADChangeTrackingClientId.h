
@interface CADChangeTrackingClientId : NSObject <NSSecureCoding> {
    NSString * _customClientId;
    NSString * _suffix;
}

@property (nonatomic, readonly) NSString *customClientId;
@property (nonatomic, readonly) bool hasCustomClientId;
@property (nonatomic, readonly) NSString *suffix;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientId;
- (id)clientIdWithBundleId:(id)arg1;
- (id)customClientId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCustomClientId;
- (bool)hasSuffix;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomClientId:(id)arg1;
- (id)initWithSuffix:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChangeTrackingClientId:(id)arg1;
- (id)suffix;

@end
