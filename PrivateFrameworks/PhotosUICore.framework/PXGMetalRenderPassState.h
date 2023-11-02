
@interface PXGMetalRenderPassState : NSObject {
    long long  _capacity;
    <MTLDevice> * _device;
    unsigned int * _spriteIndexes;
    <MTLBuffer> * _spriteIndexesMetalBuffer;
    <MTLBuffer> * _spriteTextureInfosMetalBuffer;
    struct { float x1; } * _textureInfos;
}

@property (nonatomic, readonly) long long capacity;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned int*spriteIndexes;
@property (nonatomic, readonly) <MTLBuffer> *spriteIndexesMetalBuffer;
@property (nonatomic, readonly) <MTLBuffer> *spriteTextureInfosMetalBuffer;
@property (nonatomic, readonly) struct { float x1; }*textureInfos;

- (void).cxx_destruct;
- (long long)capacity;
- (id)description;
- (id)device;
- (id)initWithDevice:(id)arg1 capacity:(long long)arg2;
- (unsigned int*)spriteIndexes;
- (id)spriteIndexesMetalBuffer;
- (id)spriteTextureInfosMetalBuffer;
- (struct { float x1; }*)textureInfos;

@end
