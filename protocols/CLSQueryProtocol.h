
@protocol CLSQueryProtocol <NSObject>

@required

- (void)cancel;
- (bool)isCancelled;
- (void)prepareForRetry;
- (void)submitWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CLSQueryProtocol> *, NSError *, void*

@end
