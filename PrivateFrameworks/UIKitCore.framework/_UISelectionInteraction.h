
@interface _UISelectionInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {
    <_UISelectionInteractionDelegate> * _delegate;
    bool  _enabled;
    struct { 
        unsigned int delegateImplementsDidBeginHinting : 1; 
        unsigned int delegateImplementsDidCancelHinting : 1; 
        unsigned int delegateImplementsShouldBegin : 1; 
    }  _flags;
    UITapGestureRecognizer * _selectGestureRecognizer;
    _UIFocusSelectObserverGestureRecognizer * _selectHighlightRecognizer;
    bool  _simulatePressesCallbacksForLegacyBehavior;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UISelectionInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (getter=isHinting, nonatomic, readonly) bool hinting;
@property (nonatomic, readonly) UITapGestureRecognizer *selectGestureRecognizer;
@property (nonatomic, readonly) _UIFocusSelectObserverGestureRecognizer *selectHighlightRecognizer;
@property (nonatomic) bool simulatePressesCallbacksForLegacyBehavior;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)highlightGestureHandler:(id)arg1;
- (id)init;
- (bool)isEnabled;
- (bool)isHinting;
- (void)selectGestureHandler:(id)arg1;
- (id)selectGestureRecognizer;
- (id)selectHighlightRecognizer;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setSimulatePressesCallbacksForLegacyBehavior:(bool)arg1;
- (void)setView:(id)arg1;
- (bool)simulatePressesCallbacksForLegacyBehavior;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
