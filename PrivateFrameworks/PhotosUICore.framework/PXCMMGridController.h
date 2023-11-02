
@interface PXCMMGridController : NSObject {
    UIViewController * _gridViewController;
    PXCMMStatusController * _statusController;
    PXMomentShareStatusPresentation * _statusPresentation;
}

@property (nonatomic, readonly) UIViewController *gridViewController;

+ (bool)useGridZeroForCMMSession:(id)arg1;

- (void).cxx_destruct;
- (id)gridViewController;
- (id)init;
- (id)initWithCMMSession:(id)arg1 enableDismissAction:(bool)arg2 assetActionManager:(id)arg3 assetCollectionActionManager:(id)arg4 performerDelegate:(id)arg5 photosViewConfigurationBlock:(id /* block */)arg6;

@end
