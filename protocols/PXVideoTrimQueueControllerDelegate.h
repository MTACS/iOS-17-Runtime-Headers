
@protocol PXVideoTrimQueueControllerDelegate <NSObject>

@required

- (void)controller:(void *)arg1 dismissViewControllerWithCompletion:(void *)arg2; // needs 2 arg types, found 6: PXVideoTrimQueueController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)controller:(PXVideoTrimQueueController *)arg1 presentViewController:(UIViewController *)arg2;

@optional

- (void)controller:(PXVideoTrimQueueController *)arg1 didCancelTrimmingVideoSources:(NSArray *)arg2;
- (void)controller:(PXVideoTrimQueueController *)arg1 didFinishTrimmingVideoSources:(NSArray *)arg2;
- (void)controller:(PXVideoTrimQueueController *)arg1 didTrimVideoFromSource:(id)arg2;
- (void)controller:(PXVideoTrimQueueController *)arg1 willTrimVideoFromSource:(id)arg2;

@end
