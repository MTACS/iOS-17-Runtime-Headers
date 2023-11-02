
@interface PXEditAppliedCinematicStateAction : PXAction {
    id /* block */  _changeBlock;
    PXCinematicEditController * _cinematicController;
    NSDictionary * _sourceCinematographyState;
    NSDictionary * _targetCinematographyState;
}

- (void).cxx_destruct;
- (id)actionNameLocalizationKey;
- (void)executeWithUndoManager:(id)arg1;
- (id)initWithCinematicController:(id)arg1 changeBlock:(id /* block */)arg2;
- (void)performAction:(id /* block */)arg1;
- (void)performRedo:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;

@end
