
@protocol ACM2SVTransportControllerDelegate <NSObject>

@required

- (void)twoSVTransportController:(void *)arg1 scheduleHandler:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: ACM2SVTransportController *, ACCHTTPHandler *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@optional

- (void)twoSVTransportController:(void *)arg1 fetchImageWithHandler:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: ACM2SVTransportController *, ACM2SVHTTPImageDownloadHandler *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)twoSVTransportControllerCancelFetchingImages:(ACM2SVTransportController *)arg1;

@end
