
@interface _DDDevicePickerClientContext : NSObject <BSXPCSecureCoding> {
    NSString * _sessionIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *sessionIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1;
- (id)sessionIdentifier;

@end
