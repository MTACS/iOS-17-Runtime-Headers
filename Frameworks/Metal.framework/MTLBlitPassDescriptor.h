
@interface MTLBlitPassDescriptor : NSObject <NSCopying>

@property (readonly) MTLBlitPassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)blitPassDescriptor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
