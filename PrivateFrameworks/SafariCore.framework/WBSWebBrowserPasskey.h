
@interface WBSWebBrowserPasskey : NSObject <NSSecureCoding> {
    NSData * _credentialID;
    NSString * _customTitle;
    NSString * _name;
    NSString * _providerName;
    NSString * _relyingParty;
    NSData * _userHandle;
}

@property (nonatomic, readonly) NSData *credentialID;
@property (nonatomic, readonly) NSString *customTitle;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *providerName;
@property (nonatomic, readonly) NSString *relyingParty;
@property (nonatomic, readonly) NSData *userHandle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)credentialID;
- (id)customTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 relyingParty:(id)arg2 credentialID:(id)arg3 userHandle:(id)arg4 customTitle:(id)arg5 providerName:(id)arg6;
- (id)name;
- (id)providerName;
- (id)relyingParty;
- (id)userHandle;

@end
