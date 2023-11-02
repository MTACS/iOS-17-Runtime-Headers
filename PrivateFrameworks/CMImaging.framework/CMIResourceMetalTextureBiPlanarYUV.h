
@interface CMIResourceMetalTextureBiPlanarYUV : NSObject <CMIResourceMetal> {
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
    <MTLTexture> * _textureUV;
    <MTLTexture> * _textureY;
    int  resourceType;
}

@property (nonatomic, readonly) NSDictionary *attachments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int matchingPixelBufferFormat;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTimeStamp;
@property (nonatomic, readonly) int resourceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <MTLTexture> *textureUV;
@property (nonatomic, readonly) <MTLTexture> *textureY;

- (void).cxx_destruct;
- (id)attachments;
- (void)dealloc;
- (id)initWithTextureY:(id)arg1 textureUV:(id)arg2 descriptor:(id)arg3;
- (id)initWithTextureY:(id)arg1 textureUV:(id)arg2 metadata:(id)arg3;
- (unsigned int)matchingPixelBufferFormat;
- (id)metadata;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimeStamp;
- (void)releaseAll;
- (int)resourceType;
- (id)textureUV;
- (id)textureY;
- (int)waitForCompletion;

@end
