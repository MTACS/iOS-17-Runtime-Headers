
@interface MTLBlitPassSampleBufferAttachmentDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long endOfEncoderSampleIndex;
@property (nonatomic, retain) <MTLCounterSampleBuffer> *sampleBuffer;
@property (nonatomic) unsigned long long startOfEncoderSampleIndex;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
