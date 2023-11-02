
@protocol MKListenerDelegate <NSObject>

@required

- (void)connection:(MKConnection *)arg1 didReceiveData:(NSData *)arg2;
- (void)listener:(MKListener *)arg1 didOpen:(long long)arg2;
- (void)listenerDidCancel:(MKListener *)arg1;

@end
