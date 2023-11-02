
@interface UIEditingOverlayViewController : UIViewController {
    _UIActionWhenIdle * _addPencilTextInputInteractionAction;
    <UIInteraction> * _pencilTextInputInteraction;
    UIUndoGestureInteraction * _undoInteraction;
}

@property (nonatomic, retain) _UIActionWhenIdle *addPencilTextInputInteractionAction;
@property (nonatomic, retain) <UIInteraction> *pencilTextInputInteraction;
@property (nonatomic, retain) UIUndoGestureInteraction *undoInteraction;

- (void).cxx_destruct;
- (void)_addInteractions;
- (void)_addPencilTextInputInteraction;
- (bool)_canShowWhileLocked;
- (void)_removeInteractions;
- (id)addPencilTextInputInteractionAction;
- (void)loadView;
- (id)pencilTextInputInteraction;
- (void)setAddPencilTextInputInteractionAction:(id)arg1;
- (void)setPencilTextInputInteraction:(id)arg1;
- (void)setUndoInteraction:(id)arg1;
- (id)undoInteraction;
- (void)updateEditingOverlayContainer;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
