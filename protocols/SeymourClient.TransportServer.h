
@protocol SeymourClient.TransportServer

@required

- (void)receiveEvent:(long long)arg1 data:(NSData *)arg2;
- (void)receiveRequest:(void *)arg1 data:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@end
