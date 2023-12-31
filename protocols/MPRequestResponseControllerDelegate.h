
@protocol MPRequestResponseControllerDelegate <NSObject>

@optional

- (void)controller:(void *)arg1 defersResponseReplacement:(void *)arg2; // needs 2 arg types, found 6: MPRequestResponseController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)controller:(MPRequestResponseController *)arg1 shouldRetryFailedRequestWithError:(NSError *)arg2;
- (void)didFinishLoadingRequestForController:(MPRequestResponseController *)arg1;
- (void)willBeginLoadingRequestForController:(MPRequestResponseController *)arg1;

@end
