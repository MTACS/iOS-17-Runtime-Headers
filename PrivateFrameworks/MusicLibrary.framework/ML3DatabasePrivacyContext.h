
@interface ML3DatabasePrivacyContext : NSObject <NSSecureCoding> {
    PAApplication * _clientApplication;
    ML3GreenTeaLogger * _greenTeaLogger;
}

@property (nonatomic, readonly) NSString *bundleID;

+ (void)logDatabasePrivacyAccessWithAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)sharedContext;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPAApplication:(id)arg1;
- (id)bundleID;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithClientIdentity:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)logDatabasePrivacyAccess;

@end
