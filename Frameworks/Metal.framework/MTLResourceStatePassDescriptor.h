
@interface MTLResourceStatePassDescriptor : NSObject <NSCopying>

@property (readonly) MTLResourceStatePassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)resourceStatePassDescriptor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
