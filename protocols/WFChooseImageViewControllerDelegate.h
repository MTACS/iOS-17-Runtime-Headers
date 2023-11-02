
@protocol WFChooseImageViewControllerDelegate <NSObject>

@required

- (void)chooseImageController:(WFChooseImageViewController *)arg1 didSelectItems:(WFContentCollection *)arg2;
- (void)chooseImageControllerDidCancel:(WFChooseImageViewController *)arg1;

@end
