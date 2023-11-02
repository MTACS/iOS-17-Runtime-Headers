
@interface MTLRenderPassColorAttachmentDescriptor : MTLRenderPassAttachmentDescriptor

@property (nonatomic) struct { double x1; double x2; double x3; double x4; } clearColor;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

@end
