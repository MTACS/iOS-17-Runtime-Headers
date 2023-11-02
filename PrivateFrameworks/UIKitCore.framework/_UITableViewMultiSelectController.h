
@interface _UITableViewMultiSelectController : NSObject <UIMultiSelectInteractionDelegate> {
    UIMultiSelectInteractionState * _currentSelectionState;
    UIMultiSelectInteraction * _multiSelectInteraction;
    UITableView * _tableView;
}

@property (nonatomic, retain) UIMultiSelectInteractionState *currentSelectionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInMultiselectInteraction, nonatomic, readonly) bool inMultiselectInteraction;
@property (nonatomic, retain) UIMultiSelectInteraction *multiSelectInteraction;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;

- (void).cxx_destruct;
- (void)_adjustSelectionRangeToIndexPath:(id)arg1 isDeselecting:(bool)arg2;
- (void)_deselectIndexPaths:(id)arg1;
- (void)_endAutoScroll;
- (void)_handleAutoScrollFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_isPointInsideEditControl:(struct CGPoint { double x1; double x2; })arg1;
- (void)_selectIndexPaths:(id)arg1;
- (bool)_shouldBeginInteractionAtIndexPath:(id)arg1;
- (bool)_shouldBeginInteractionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_tableViewDelegate;
- (void)_updateSelectedIndexPaths:(id)arg1;
- (void)_updateSelectedIndexPathsForCurrentSelection;
- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(bool)arg1;
- (void)clearSelectionState;
- (id)currentSelectionState;
- (void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)didEndMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithTableView:(id)arg1;
- (bool)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint { double x1; double x2; })arg2 withVelocity:(struct CGPoint { double x1; double x2; })arg3;
- (bool)isInMultiSelectMode;
- (bool)isInMultiselectInteraction;
- (id)keyCommandsForSelectionExtension;
- (id)multiSelectInteraction;
- (void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)multiSelectInteraction:(id)arg1 extendSelectionInDirection:(unsigned long long)arg2;
- (void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)arg1;
- (void)selectedIndexPathsChanged:(id)arg1;
- (void)setCurrentSelectionState:(id)arg1;
- (void)setMultiSelectInteraction:(id)arg1;
- (void)setTableView:(id)arg1;
- (bool)shouldAllowSelectionAppendageAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldAllowSelectionExtensionAtIndexPath:(id)arg1;
- (bool)shouldAllowSelectionExtensionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldBeginMultiSelectInteraction:(id)arg1 ofType:(long long)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 withVelocity:(struct CGPoint { double x1; double x2; })arg4;
- (bool)supportsKeyboardSelectionExtension;
- (bool)supportsMultiSelectInteraction:(id)arg1;
- (id)tableView;
- (id)targetForKeyCommands;
- (void)toggleSelectionStateUpToIndexPath:(id)arg1;
- (void)uninstallFromTableView;
- (void)willBeginExtendingSelectionAtIndexPath:(id)arg1 keepingSelection:(bool)arg2;
- (void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 keepCurrentSelection:(bool)arg3;

@end
