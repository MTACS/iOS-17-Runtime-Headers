
@interface CAStateController : NSObject {
    struct _CAStateControllerData { id x1; struct __CFDictionary {} *x2; id x3; id x4; } * _data;
}

@property NSObject<CAStateControllerDelegate> *delegate;
@property (readonly) CALayer *layer;

- (void)_addAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3 undo:(id)arg4;
- (void)_applyTransition:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4;
- (void)_applyTransitionElement:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4;
- (void)_nextStateTimer:(id)arg1;
- (void)_removeTransition:(id)arg1 layer:(id)arg2;
- (void)cancelTimers;
- (void)dealloc;
- (id)delegate;
- (id)initWithLayer:(id)arg1;
- (id)layer;
- (id)removeAllStateChanges;
- (void)restoreStateChanges:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitialStatesOfLayer:(id)arg1;
- (void)setInitialStatesOfLayer:(id)arg1 transitionSpeed:(float)arg2;
- (void)setState:(id)arg1 ofLayer:(id)arg2;
- (void)setState:(id)arg1 ofLayer:(id)arg2 transitionSpeed:(float)arg3;
- (id)stateOfLayer:(id)arg1;

@end
