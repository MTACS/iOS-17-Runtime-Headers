
@interface AVMobileAuxiliaryControlsView : AVView <AVControlOverflowButtonDelegate, AVMobileAuxiliaryControlDelegate> {
    double  _controlSpacing;
    NSArray * _controls;
    NSArray * _controlsInPriorityOrder;
    <AVMobileAuxiliaryControlsViewDelegate> * _delegate;
    bool  _hasOverflowOnlyControl;
    AVControlOverflowButton * _overflowControl;
}

@property (nonatomic) double controlSpacing;
@property (nonatomic, retain) NSArray *controls;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVMobileAuxiliaryControlsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasOverflowOnlyControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_controlsWithViewsInPriorityOrder;
- (id)_overflowControl;
- (bool)_requiresOverflowControl;
- (void)_updateHasOverflowOnlyControl;
- (void)_updateOverflowControlContextMenu;
- (void)_updatePriorityOrderControlsList;
- (void)auxiliaryControlDidChangeState:(id)arg1;
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)arg1;
- (double)controlSpacing;
- (id)controls;
- (id)delegate;
- (bool)hasOverflowOnlyControl;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)overflowButtonDidHideContextMenu:(id)arg1;
- (void)overflowButtonWillShowContextMenu:(id)arg1;
- (id)overflowMenuItemsForControlOverflowButton:(id)arg1;
- (void)setControlSpacing:(double)arg1;
- (void)setControls:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasOverflowOnlyControl:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeFittingControls:(id)arg1;
- (void)updateOverflowMenu;

@end
