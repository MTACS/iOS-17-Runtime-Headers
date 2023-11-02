
@protocol HMDDataStreamSocket <NSObject>

@required

- (NSString *)applicationProtocolName;
- (void)close;
- (<HMDDataStreamSocketDelegate> *)delegate;
- (bool)isClosed;
- (bool)isClosing;
- (NSData *)readData;
- (void)setDelegate:(id <HMDDataStreamSocketDelegate>)arg1;
- (void)setTrafficClass:(unsigned long long)arg1;
- (unsigned long long)trafficClass;
- (void)writeData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)writeData:(NSData *)arg1 error:(id*)arg2;

@end
