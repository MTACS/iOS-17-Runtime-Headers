
@protocol WFEditorAuxiliaryViewPresenter <NSObject>

@required

- (bool)canExpandDrawerAsAuxiliaryViewPresenter;
- (void)collapseDrawerAsAuxiliaryViewPresenter;
- (void)expandDrawerAsAuxiliaryViewPresenter;
- (void)presentDrawerViewControllerAsAuxiliaryViewPresenter:(UIViewController *)arg1 inPopover:(bool)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)presentShortcutDetailsAsAuxiliaryViewPresenter;

@end
