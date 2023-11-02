
@interface ENCredentialStore : NSObject <NSCoding> {
    NSMutableDictionary * _store;
}

@property (nonatomic, retain) NSMutableDictionary *store;

+ (id)loadCredentialsFromAppDefaults;

- (void).cxx_destruct;
- (void)addCredentials:(id)arg1;
- (void)clearAllCredentials;
- (id)credentialsForHost:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)removeCredentials:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
