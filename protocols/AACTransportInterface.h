
@protocol AACTransportInterface <NSObject>

@required

- (void)transportEvent:(unsigned long long)arg1 data:(NSData *)arg2;
- (void)transportRequest:(void *)arg1 data:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@end
