
@interface WBSPasswordBreachContext : NSObject {
    WBSPasswordBreachConfiguration * _configuration;
    WBSPasswordBreachCryptographicOperations * _cryptographicOperations;
    WBSPasswordBreachStore * _store;
}

@property (nonatomic, readonly) WBSPasswordBreachConfiguration *configuration;
@property (nonatomic, readonly) WBSPasswordBreachCryptographicOperations *cryptographicOperations;
@property (nonatomic, readonly) WBSPasswordBreachStore *store;

- (void).cxx_destruct;
- (id)configuration;
- (id)cryptographicOperations;
- (id)initWithConfiguration:(id)arg1 store:(id)arg2;
- (id)store;

@end
