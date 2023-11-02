
@interface SBPIPCompoundAssertion : NSObject {
    NSMapTable * _controllerToStashAssertionMap;
    NSString * _identifier;
    long long  _reason;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long reason;

- (void).cxx_destruct;
- (void)addAssertionForController:(id)arg1 windowScene:(id)arg2;
- (void)dealloc;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 reason:(long long)arg2;
- (void)invalidate;
- (long long)reason;
- (void)removeAssertionForController:(id)arg1;

@end
