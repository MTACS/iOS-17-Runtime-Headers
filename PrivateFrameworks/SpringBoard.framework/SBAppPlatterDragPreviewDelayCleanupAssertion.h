
@interface SBAppPlatterDragPreviewDelayCleanupAssertion : NSObject <BSDescriptionProviding, BSInvalidatable> {
    SBAppPlatterDragPreview * _dragPreview;
    bool  _invalidated;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBAppPlatterDragPreview *dragPreview;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)dragPreview;
- (id)initWithDragPreview:(id)arg1 reason:(id)arg2;
- (void)invalidate;
- (bool)isInvalidated;
- (id)reason;
- (void)setInvalidated:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
