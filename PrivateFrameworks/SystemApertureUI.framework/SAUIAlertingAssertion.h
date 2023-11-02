
@interface SAUIAlertingAssertion : SAAutomaticallyInvalidatingAssertion {
    SAUIPreferredLayoutModeAssertion * _preferredLayoutModeAssertion;
}

@property (nonatomic, readonly) SAUIPreferredLayoutModeAssertion *preferredLayoutModeAssertion;

- (void).cxx_destruct;
- (id)initWithPreferredLayoutModeAssertion:(id)arg1 invalidationInterval:(double)arg2;
- (id)preferredLayoutModeAssertion;

@end
