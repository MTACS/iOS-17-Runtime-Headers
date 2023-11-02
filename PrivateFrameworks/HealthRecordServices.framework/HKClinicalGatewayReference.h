
@interface HKClinicalGatewayReference : NSObject <NSCopying, NSSecureCoding> {
    HKFHIRVersion * _FHIRVersion;
    NSString * _gatewayBatchID;
    NSString * _gatewayID;
    long long  _minCompatibleAPIVersion;
}

@property (nonatomic, readonly, copy) HKFHIRVersion *FHIRVersion;
@property (nonatomic, readonly, copy) NSString *gatewayBatchID;
@property (nonatomic, readonly, copy) NSString *gatewayID;
@property (nonatomic, readonly) long long minCompatibleAPIVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)FHIRVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)gatewayBatchID;
- (id)gatewayID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGatewayID:(id)arg1 gatewayBatchID:(id)arg2 minCompatibleAPIVersion:(long long)arg3 FHIRVersion:(id)arg4;
- (bool)isEqual:(id)arg1;
- (long long)minCompatibleAPIVersion;

@end
