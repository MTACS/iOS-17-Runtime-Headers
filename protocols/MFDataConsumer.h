
@protocol MFDataConsumer <NSObject>

@required

- (long long)appendData:(NSData *)arg1;
- (void)done;

@end
