
@interface CMIResourceMetalTexture : NSObject <CMIResourceMetal> {
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
    <MTLTexture> * _texture;
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
@property (nonatomic, readonly) <MTLTexture> *texture;

- (void).cxx_destruct;
- (id)attachments;
- (void)dealloc;
- (id)initWithTexture:(id)arg1 descriptor:(id)arg2;
- (id)initWithTexture:(id)arg1 metadata:(id)arg2;
- (unsigned int)matchingPixelBufferFormat;
- (id)metadata;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimeStamp;
- (void)releaseAll;
- (int)resourceType;
- (id)texture;
- (int)waitForCompletion;

@end
