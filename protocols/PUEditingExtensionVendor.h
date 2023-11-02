
@protocol PUEditingExtensionVendor

@required

- (void)beginContentEditingWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)cancelContentEditingWithResponseHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)finishContentEditing;
- (void)queryHandlingCapabilityForAdjustmentData:(void *)arg1 withResponseHandler:(void *)arg2; // needs 2 arg types, found 7: PHAdjustmentData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)querySDKVersionWithResponseHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, void*
- (void)queryShouldShowCancelConfirmationWithResponseHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setupUndoProxyWithXPCListenerEndpoint:(NSXPCListenerEndpoint *)arg1 attemptUndoManagerAutoSetup:(bool)arg2;

@end
