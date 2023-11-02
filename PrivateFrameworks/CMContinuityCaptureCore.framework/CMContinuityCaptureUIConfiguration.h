
@interface CMContinuityCaptureUIConfiguration : NSObject <NSSecureCoding> {
    NSString * _applicationIdentifier;
    long long  _clientDeviceModel;
    NSString * _clientName;
    long long  _compositeState;
    NSNumber * _placementStepSkipped;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic) long long clientDeviceModel;
@property (nonatomic, copy) NSString *clientName;
@property (nonatomic) long long compositeState;
@property (nonatomic, copy) NSNumber *placementStepSkipped;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (long long)clientDeviceModel;
- (id)clientName;
- (long long)compositeState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)placementStepSkipped;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setClientDeviceModel:(long long)arg1;
- (void)setClientName:(id)arg1;
- (void)setCompositeState:(long long)arg1;
- (void)setPlacementStepSkipped:(id)arg1;

@end
