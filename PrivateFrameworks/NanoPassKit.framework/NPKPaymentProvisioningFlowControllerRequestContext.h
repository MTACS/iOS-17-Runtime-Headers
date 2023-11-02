
@interface NPKPaymentProvisioningFlowControllerRequestContext : NSObject <NSSecureCoding> {
    NSString * _currentStepIdentifier;
    NPKProtoStandaloneRequestHeader * _requestHeader;
}

@property (nonatomic, readonly) NSString *currentStepIdentifier;
@property (readonly) NPKProtoStandaloneRequestHeader *requestHeader;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currentStepIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestHeader:(id)arg1;
- (id)requestHeader;

@end
