
@interface UIBandSelectionInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction, UIInteraction_Internal, UIPointerInteractionDelegate> {
    id /* block */  __bandVisibilityHandler;
    bool  __debugUIEnabled;
    bool  _enabled;
    bool  _hidesVisuals;
    UIHoverGestureRecognizer * _hoverGR;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocation;
    long long  _initialModifierFlags;
    unsigned long long  _internalState;
    UILongPressGestureRecognizer * _pressGR;
    id /* block */  _selectionHandler;
    id /* block */  _shouldBeginHandler;
    long long  _state;
    UIView * _view;
    <_UISelectionBandVisualProviding> * _visualProvider;
}

@property (setter=_setBandVisibilityHandler:, nonatomic, copy) id /* block */ _bandVisibilityHandler;
@property (nonatomic) bool _debugUIEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIHoverGestureRecognizer *hoverGR;
@property (nonatomic, readonly) long long initialModifierFlags;
@property (nonatomic, retain) <UIInteractionEffect> *interactionEffect;
@property (nonatomic, retain) UILongPressGestureRecognizer *pressGR;
@property (nonatomic, copy) id /* block */ selectionHandler;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } selectionRect;
@property (nonatomic, copy) id /* block */ shouldBeginHandler;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, retain) <_UISelectionBandVisualProviding> *visualProvider;

- (void).cxx_destruct;
- (id /* block */)_bandVisibilityHandler;
- (void)_callHandlerWithState:(long long)arg1;
- (bool)_debugUIEnabled;
- (bool)_gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2;
- (bool)_gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (unsigned long long)_handleBeginEvent;
- (void)_handleDidBegin;
- (void)_handleDidEndFromState:(unsigned long long)arg1;
- (void)_handleDidMove;
- (void)_handleHoverGesture:(id)arg1;
- (void)_handlePressGesture:(id)arg1;
- (bool)_isSelecting;
- (struct CGPoint { double x1; double x2; })_locationInView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionRectWithLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setBandVisibilityHandler:(id /* block */)arg1;
- (void)_updateDebugUIWithGesture:(id)arg1;
- (void)_updateInteractionEnabled;
- (void)_viewTraitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (void)didMoveToView:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)hoverGR;
- (id)initWithSelectionHandler:(id /* block */)arg1;
- (long long)initialModifierFlags;
- (bool)isEnabled;
- (id)pressGR;
- (id /* block */)selectionHandler;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionRect;
- (void)setEnabled:(bool)arg1;
- (void)setHoverGR:(id)arg1;
- (void)setPressGR:(id)arg1;
- (void)setSelectionHandler:(id /* block */)arg1;
- (void)setShouldBeginHandler:(id /* block */)arg1;
- (void)setVisualProvider:(id)arg1;
- (void)set_debugUIEnabled:(bool)arg1;
- (id /* block */)shouldBeginHandler;
- (long long)state;
- (id)view;
- (id)visualProvider;
- (void)willMoveToView:(id)arg1;

@end
