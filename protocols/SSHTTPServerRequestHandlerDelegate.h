
@protocol SSHTTPServerRequestHandlerDelegate

@required

- (void)requestDidFinish:(SSHTTPServerRequestHandler *)arg1;
- (id /* block */)responseBlockForPath:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NSURLRequest *, void*, id, SEL, NSString *

@end
