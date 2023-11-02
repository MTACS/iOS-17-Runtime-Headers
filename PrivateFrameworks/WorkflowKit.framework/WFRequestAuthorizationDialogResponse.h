
@interface WFRequestAuthorizationDialogResponse : WFDialogResponse {
    unsigned long long  _result;
}

@property (nonatomic, readonly) unsigned long long result;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseCode:(long long)arg1;
- (id)initWithResult:(unsigned long long)arg1;
- (id)initWithResult:(unsigned long long)arg1 cancelled:(bool)arg2;
- (unsigned long long)result;

@end
