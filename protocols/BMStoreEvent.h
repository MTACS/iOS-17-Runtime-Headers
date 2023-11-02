
@protocol BMStoreEvent <NSObject>

@required

- (unsigned char)error;
- (<BMStoreData> *)eventBody;
- (double)timestamp;

@end
