
@protocol HMDDataStreamTransport <NSObject>

@required

- (void)close;
- (void)connect;
- (<HMDDataStreamTransportDelegate> *)delegate;
- (void)sendRawFrame:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setDelegate:(id <HMDDataStreamTransportDelegate>)arg1;
- (void)setTrafficClass:(unsigned long long)arg1;

@end
