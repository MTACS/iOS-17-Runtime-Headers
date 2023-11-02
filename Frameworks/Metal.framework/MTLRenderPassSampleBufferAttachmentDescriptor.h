
@interface MTLRenderPassSampleBufferAttachmentDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long endOfFragmentSampleIndex;
@property (nonatomic) unsigned long long endOfVertexSampleIndex;
@property (nonatomic, retain) <MTLCounterSampleBuffer> *sampleBuffer;
@property (nonatomic) unsigned long long startOfFragmentSampleIndex;
@property (nonatomic) unsigned long long startOfVertexSampleIndex;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
