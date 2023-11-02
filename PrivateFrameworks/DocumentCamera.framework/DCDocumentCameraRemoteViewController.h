
@interface DCDocumentCameraRemoteViewController : _UIRemoteViewController <DCDocumentCameraRemoteViewController> {
    UIViewController<DCDocumentCameraPublicViewController> * _publicViewController;
}

@property (nonatomic) UIViewController<DCDocumentCameraPublicViewController> *publicViewController;
@property (getter=viewServiceViewController, nonatomic, readonly) <DCDocumentCameraViewServiceViewController> *viewServiceViewController;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)didCancel;
- (void)didFailWithError:(id)arg1;
- (void)didFinishWithDocumentInfoCollection:(id)arg1;
- (void)dismiss;
- (id)publicViewController;
- (void)setPublicViewController:(id)arg1;
- (void)viewControllerWasDismissed;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewServicePreferredSizeDidChange:(struct CGSize { double x1; double x2; })arg1;
- (id)viewServiceViewController;

@end
