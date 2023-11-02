
@interface AACustodianSetupRequestContext : NSObject <NSSecureCoding> {
    NSString * _contactID;
    NSString * _custodianSetupToken;
    NSString * _handle;
}

@property (nonatomic, copy) NSString *contactID;
@property (nonatomic, readonly, copy) NSString *custodianSetupToken;
@property (nonatomic, readonly, copy) NSString *handle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_parseAuthResults:(id)arg1;
- (id)contactID;
- (id)custodianSetupToken;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1 authResults:(id)arg2;
- (void)setContactID:(id)arg1;

@end
