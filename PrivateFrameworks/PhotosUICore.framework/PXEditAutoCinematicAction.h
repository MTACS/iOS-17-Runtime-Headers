
@interface PXEditAutoCinematicAction : PXAction {
    PXCinematicEditController * _cinematicController;
    bool  _isInAutoFocusState;
    NSString * _localizedActionName;
}

@property (nonatomic, copy) NSString *localizedActionName;

- (void).cxx_destruct;
- (id)initWithCinematicController:(id)arg1;
- (id)localizedActionName;
- (void)performAction:(id /* block */)arg1;
- (void)performRedo:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (void)setLocalizedActionName:(id)arg1;

@end
