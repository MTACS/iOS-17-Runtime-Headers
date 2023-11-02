
@interface CMIResourceMetalTextureDescriptor : NSObject {
    NSDictionary * _attachments;
    <MTLCommandBuffer> * _commandBuffer;
    unsigned int  _matchingPixelBufferFormat;
    NSDictionary * _metadata;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _presentationTimeStamp;
}

@property (nonatomic, retain) NSDictionary *attachments;
@property (nonatomic, retain) <MTLCommandBuffer> *commandBuffer;
@property (nonatomic) unsigned int matchingPixelBufferFormat;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTimeStamp;

- (void).cxx_destruct;
- (id)attachments;
- (id)commandBuffer;
- (id)init;
- (unsigned int)matchingPixelBufferFormat;
- (id)metadata;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimeStamp;
- (void)setAttachments:(id)arg1;
- (void)setCommandBuffer:(id)arg1;
- (void)setMatchingPixelBufferFormat:(unsigned int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPresentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
