
@interface RMBaseStore : NSObject <RMStoreProtocol> {
    NSString * _accountIdentifier;
    bool  _dataSeparated;
    bool  _defaultToInteractive;
    NSURL * _enrollmentURL;
    NSString * _identifier;
    NSString * _name;
    NSString * _personaIdentifier;
    long long  _scope;
    NSString * _storeDescription;
    long long  _type;
    RMStoreXPCConnection * _xpcConnection;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) bool dataSeparated;
@property (nonatomic) bool defaultToInteractive;
@property (nonatomic, copy) NSURL *enrollmentURL;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *personaIdentifier;
@property (nonatomic) long long scope;
@property (nonatomic, copy) NSString *storeDescription;
@property (nonatomic) long long type;
@property (nonatomic, retain) RMStoreXPCConnection *xpcConnection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (bool)dataSeparated;
- (void)declarationManifestWithCompletionHandler:(id /* block */)arg1;
- (void)declarationWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)declarationsWithCompletionHandler:(id /* block */)arg1;
- (void)declarationsWithTypes:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)defaultToInteractive;
- (void)encodeWithCoder:(id)arg1;
- (id)enrollmentURL;
- (void)fetchDataAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 scope:(long long)arg3 name:(id)arg4 description:(id)arg5 enrollmentURL:(id)arg6 accountIdentifier:(id)arg7 defaultToInteractive:(bool)arg8 dataSeparated:(bool)arg9 personaIdentifier:(id)arg10;
- (bool)isEqualToStore:(id)arg1;
- (bool)isValidDeclaration:(id)arg1;
- (id)metadataReturningError:(id*)arg1;
- (id)metadataValueForKey:(id)arg1 error:(id*)arg2;
- (id)name;
- (id)personaIdentifier;
- (long long)scope;
- (void)setAccountIdentifier:(id)arg1;
- (void)setDataSeparated:(bool)arg1;
- (void)setDefaultToInteractive:(bool)arg1;
- (void)setEnrollmentURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPersonaIdentifier:(id)arg1;
- (void)setScope:(long long)arg1;
- (void)setShouldInstallConfiguration:(id)arg1 shouldInstall:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setStoreDescription:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)storeDescription;
- (long long)type;
- (id)xpcConnection;

@end
