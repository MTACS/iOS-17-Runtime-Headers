
@interface PXCMMShowPhotosPickerActionPerformer : PXCMMActionPerformer {
    <PXGridPresentation> * _gridPresentation;
}

@property (nonatomic, readonly) <PXGridPresentation> *gridPresentation;

- (void).cxx_destruct;
- (id)gridPresentation;
- (id)performActionWithSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performPhotosPickerActionWithSession:(id)arg1 gridPresentation:(id)arg2 completionHandler:(id /* block */)arg3;

@end
