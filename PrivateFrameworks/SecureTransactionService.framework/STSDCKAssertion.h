
@interface STSDCKAssertion : NSObject {
    NFDCKAssertion * _assertion;
}

@property (nonatomic, readonly) NFDCKAssertion *assertion;
@property (nonatomic, readonly) NSString *keyIdentifier;

- (void).cxx_destruct;
- (id)assertion;
- (void)dealloc;
- (id)initWithAssertion:(id)arg1;
- (void)invalidate;
- (id)keyIdentifier;

@end
