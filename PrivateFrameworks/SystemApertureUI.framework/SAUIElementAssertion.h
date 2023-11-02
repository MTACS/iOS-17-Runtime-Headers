
@interface SAUIElementAssertion : SAAssertion {
    <SAElement> * _element;
    long long  _invalidationLayoutModeChangeReason;
}

@property (nonatomic, readonly) <SAElement> *element;
@property (nonatomic) long long invalidationLayoutModeChangeReason;

- (void).cxx_destruct;
- (id)_descriptionConstituents;
- (id)element;
- (id)initWithElement:(id)arg1 invalidationHandler:(id /* block */)arg2;
- (void)invalidateWithReason:(id)arg1 layoutModeChangeReason:(long long)arg2;
- (long long)invalidationLayoutModeChangeReason;
- (void)setInvalidationLayoutModeChangeReason:(long long)arg1;

@end
