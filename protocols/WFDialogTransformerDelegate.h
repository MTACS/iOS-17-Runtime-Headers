
@protocol WFDialogTransformerDelegate

@required

- (void)dialogTransformer:(WFDialogTransformer *)arg1 stopRunningWithError:(NSError *)arg2;
- (void)dialogTransformerDidDisplayDialog:(WFDialogTransformer *)arg1;
- (void)dialogTransformerWillDisplayDialog:(WFDialogTransformer *)arg1;

@end
