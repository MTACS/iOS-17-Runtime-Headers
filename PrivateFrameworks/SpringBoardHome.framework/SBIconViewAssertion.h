
@interface SBIconViewAssertion : NSObject <BSDescriptionProviding, BSInvalidatable> {
    long long  _assertionType;
    NSDictionary * _extraInfo;
    SBIconView * _iconView;
    bool  _invalidated;
}

@property (nonatomic, readonly) long long assertionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *extraInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIconView *iconView;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)assertionType;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)extraInfo;
- (id)iconView;
- (id)initWithAssertionType:(long long)arg1 iconView:(id)arg2 extraInfo:(id)arg3;
- (void)invalidate;
- (bool)isInvalidated;
- (void)setInvalidated:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
