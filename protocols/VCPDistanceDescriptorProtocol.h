
@protocol VCPDistanceDescriptorProtocol

@required

+ (id)descriptorWithData:(NSData *)arg1;
+ (id)descriptorWithImage:(struct __CVBuffer { }*)arg1;
+ (int)preferredPixelFormat;
+ (bool)usePHAssetData;

- (int)computeDistance:(float*)arg1 toDescriptor:(id <VCPDistanceDescriptorProtocol>)arg2;
- (NSData *)serialize;

@end
