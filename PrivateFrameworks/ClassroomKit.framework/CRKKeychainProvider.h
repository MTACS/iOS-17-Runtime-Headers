
@interface CRKKeychainProvider : NSObject {
    <CRKKeychain> * _keychain;
}

@property (nonatomic, readonly) <CRKKeychain> *keychain;

+ (id)makeKeychainForCurrentEnvironment;
+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)initWithKeychain:(id)arg1;
- (id)keychain;

@end
