
@protocol CDXClientDelegate

@required

- (void)CDXClient:(CDXClient *)arg1 error:(NSError *)arg2;
- (void)CDXClient:(CDXClient *)arg1 preblob:(NSData *)arg2;

@end
