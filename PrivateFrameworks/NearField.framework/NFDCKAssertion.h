
@interface NFDCKAssertion : NSObject {
    SESDCKAssertion * _sesAssertion;
}

@property (nonatomic, readonly) NSString *keyIdentifier;
@property (nonatomic, readonly) SESDCKAssertion *sesAssertion;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSESAssertion:(id)arg1;
- (void)invalidate;
- (id)keyIdentifier;
- (id)sesAssertion;

@end
