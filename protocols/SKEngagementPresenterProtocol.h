
@protocol SKEngagementPresenterProtocol <NSObject>

@required

- (void)engagementTaskDidFinishWithResult:(void *)arg1 resultData:(void *)arg2 error:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: NSDictionary *, NSData *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)preferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg1;

@end
