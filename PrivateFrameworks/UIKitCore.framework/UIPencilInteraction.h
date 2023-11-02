
@interface UIPencilInteraction : NSObject <UIInteraction, UIInteraction_Internal> {
    <UIPencilInteractionDelegate> * _delegate;
    bool  _enabled;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIPencilInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <UIInteractionEffect> *interactionEffect;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

+ (void)_setHasUsedPassivePencil:(bool)arg1;
+ (void)_setPrefersPencilOnlyDrawing:(bool)arg1;
+ (bool)hasSeenPencilPairingUI;
+ (bool)hasUsedPassivePencil;
+ (long long)preferredTapAction;
+ (bool)prefersPencilOnlyDrawing;

- (void).cxx_destruct;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didMoveToView:(id)arg1;
- (id)init;
- (bool)isEnabled;
- (void)performDelegateDidTap;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
