
@interface TRASettingsActuationContext : NSObject <BSDescriptionProviding, NSCopying> {
    BSAnimationSettings * _animationSettings;
    id  _drawingFence;
    bool  _preventTouchCancellation;
}

@property (nonatomic, copy) BSAnimationSettings *animationSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) id drawingFence;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool preventTouchCancellation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)animationSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)drawingFence;
- (id)init;
- (id)initWithAnimationSettings:(id)arg1 drawingFence:(id)arg2;
- (id)initWithAnimationSettings:(id)arg1 drawingFence:(id)arg2 preventTouchCancellation:(bool)arg3;
- (id)initWithSettingsActuationContext:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSettingsActuationContext:(id)arg1;
- (bool)preventTouchCancellation;
- (void)setAnimationSettings:(id)arg1;
- (void)setDrawingFence:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
