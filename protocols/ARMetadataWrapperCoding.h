
@protocol ARMetadataWrapperCoding <NSObject>

@required

+ (NSArray *)grabNextFromReader:(MOVReaderInterface *)arg1 timestamp:(double*)arg2;

- (void)appendToWriter:(MOVWriterInterface *)arg1;
- (NSData *)encodeToMetadataWrapper;
- (id)initWithMetadataWrapper:(NSData *)arg1;

@end
