
@interface BLSBacklightSceneUpdateContext : NSObject {
    bool  _animated;
    BLSAlwaysOnFrameSpecifier * _frameSpecifier;
    BLSBacklightSceneVisualState * _previousVisualState;
    bool  _touchTargetable;
    BLSBacklightChangeEvent * _triggerEvent;
    BLSBacklightSceneVisualState * _visualState;
}

@property (getter=isAnimated, nonatomic, readonly) bool animated;
@property (nonatomic, readonly) BLSAlwaysOnFrameSpecifier *frameSpecifier;
@property (nonatomic, readonly) BLSBacklightSceneVisualState *previousVisualState;
@property (getter=isTouchTargetable, nonatomic, readonly) bool touchTargetable;
@property (nonatomic, readonly) BLSBacklightChangeEvent *triggerEvent;
@property (nonatomic, readonly) BLSBacklightSceneVisualState *visualState;

- (void).cxx_destruct;
- (id)description;
- (id)frameSpecifier;
- (unsigned long long)hash;
- (id)initWithVisualState:(id)arg1 previousVisualState:(id)arg2 frameSpecifier:(id)arg3 animated:(bool)arg4 triggerEvent:(id)arg5 touchTargetable:(bool)arg6;
- (bool)isAnimated;
- (bool)isEqual:(id)arg1;
- (bool)isTouchTargetable;
- (id)previousVisualState;
- (id)triggerEvent;
- (id)visualState;

@end
