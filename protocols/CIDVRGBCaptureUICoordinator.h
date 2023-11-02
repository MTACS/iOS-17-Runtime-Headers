
@protocol CIDVRGBCaptureUICoordinator <NSObject>

@required

- (void)finishWithError:(NSError *)arg1;
- (void)finishWithError:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)startWithConfig:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CIDVRGBCaptureUIConfig *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CIDVRGBCaptureUIResult *, NSError *, void*

@end
