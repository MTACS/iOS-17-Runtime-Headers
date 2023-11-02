
@protocol BWDataBufferBackedFormat <NSObject>

@required

- (NSDictionary *)dataBufferAttributes;
- (unsigned long long)dataBufferSize;
- (unsigned int)dataFormat;

@end
