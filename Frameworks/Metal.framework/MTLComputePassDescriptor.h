
@interface MTLComputePassDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long dispatchType;
@property (readonly) MTLComputePassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)computePassDescriptor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
