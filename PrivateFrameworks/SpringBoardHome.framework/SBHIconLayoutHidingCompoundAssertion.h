
@interface SBHIconLayoutHidingCompoundAssertion : NSObject <SBHIconLayoutHidingUpdating> {
    NSMapTable * _childAssertions;
    NSMutableArray * _icons;
    bool  _invalidated;
    <SBHIconLayoutHidingCompoundAssertionInvalidationHandler> * _invalidationHandler;
    unsigned long long  _options;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *icons;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, readonly) <SBHIconLayoutHidingCompoundAssertionInvalidationHandler> *invalidationHandler;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAssertion:(id)arg1 forChild:(id)arg2;
- (void)addAssertionFromChild:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)icons;
- (id)initWithInvalidationHandler:(id)arg1 icons:(id)arg2 reason:(id)arg3 options:(unsigned long long)arg4;
- (void)invalidate;
- (id)invalidationHandler;
- (bool)isInvalidated;
- (unsigned long long)options;
- (id)reason;
- (void)removeAndInvalidateAssertionsForChild:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
