
@interface _PXGViewSetupParameters : NSObject {
    bool  _needsParenting;
    unsigned int  _spriteIndex;
    <PXGSpriteTexture> * _texture;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*sampleOrigin; 
    }  _textureInfo;
}

@property (nonatomic) bool needsParenting;
@property (nonatomic) unsigned int spriteIndex;
@property (nonatomic, retain) <PXGSpriteTexture> *texture;
@property (nonatomic) struct { float x1; } textureInfo;

- (void).cxx_destruct;
- (bool)needsParenting;
- (void)setNeedsParenting:(bool)arg1;
- (void)setSpriteIndex:(unsigned int)arg1;
- (void)setTexture:(id)arg1;
- (void)setTextureInfo:(struct { float x1; })arg1;
- (unsigned int)spriteIndex;
- (id)texture;
- (struct { float x1; })textureInfo;

@end
