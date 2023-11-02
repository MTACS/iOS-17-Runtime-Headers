
@interface SBAsynchronousRenderingAssertion : BSSimpleAssertion {
    bool  _wantsMinificationFilter;
}

@property (nonatomic) bool wantsMinificationFilter;

- (id)initWithReason:(id)arg1;
- (id)initWithReason:(id)arg1 wantsMinificationFilter:(bool)arg2;
- (void)setWantsMinificationFilter:(bool)arg1;
- (bool)wantsMinificationFilter;

@end
