
@interface _UITextFloatingCursorSession : NSObject <_UIInvalidatable> {
    _UITextCursorView * _floatingCursorView;
    <UITextCursorAssertion> * _ghostCursorAssertion;
    bool  _isValid;
    UITextSelectionDisplayInteraction * _manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _UITextCursorView *floatingCursorView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UITextSelectionDisplayInteraction *manager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_floatingCursorPositionForPoint:(struct CGPoint { double x1; double x2; })arg1 lineSnapping:(bool)arg2;
- (void)_invalidate;
- (void)_invalidateAnimated:(bool)arg1;
- (id)_selectionContainerView;
- (id)_springAnimation;
- (void)_updateCursorFadedHiddenForFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)floatingCursorView;
- (id)initWithCursorView:(id)arg1 selectionManager:(id)arg2;
- (id)manager;
- (void)updateWithPoint:(struct CGPoint { double x1; double x2; })arg1 inContainer:(id)arg2 animated:(bool)arg3;

@end
