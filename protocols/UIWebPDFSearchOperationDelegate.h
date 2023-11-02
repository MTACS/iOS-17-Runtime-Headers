
@protocol UIWebPDFSearchOperationDelegate

@required

- (void)search:(UIWebPDFSearchOperation *)arg1 hasPartialResults:(NSArray *)arg2;
- (void)searchDidBegin:(UIWebPDFSearchOperation *)arg1;
- (void)searchDidFinish:(UIWebPDFSearchOperation *)arg1;
- (void)searchDidTimeOut:(UIWebPDFSearchOperation *)arg1;
- (void)searchLimitHit:(UIWebPDFSearchOperation *)arg1;
- (void)searchWasCancelled:(UIWebPDFSearchOperation *)arg1;

@end
