
@interface UIKeyboardMotionSupport : NSObject <_UIScreenBasedObject> {
    UIWindowScene * _canvas;
    <UISplitKeyboardSource> * _controller;
    UIScreen * _screen;
}

@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UISplitKeyboardSource> *masterController;
@property (readonly) Class superclass;

+ (id)supportForScreen:(id)arg1;
+ (id)supportForUIScene:(id)arg1;

- (void).cxx_destruct;
- (void)_connectController:(id)arg1;
- (void)_disconnectingController:(id)arg1;
- (id)_initWithCanvas:(id)arg1 options:(id)arg2;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;
- (id)_intendedCanvas;
- (id)_intendedScreen;
- (bool)_matchingOptions:(id)arg1;
- (id)_options;
- (void)_updatedController;
- (bool)generateSplitNotificationForNewPlacement:(id)arg1;
- (id)masterController;
- (void)setMasterController:(id)arg1;
- (void)translateToPlacement:(id)arg1 animated:(bool)arg2;
- (void)translateToPlacement:(id)arg1 quietly:(bool)arg2 animated:(bool)arg3;

@end
