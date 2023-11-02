
@interface StagingBuffer : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _atlasHomography;
    <MTLTexture> * _chroma;
    bool  _dirty;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _homographyToReference;
    <MTLTexture> * _luma;
    NSDictionary * _metadata;
    <MTLTexture> * _weights;
}

@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } atlasHomography;
@property (retain) <MTLTexture> *chroma;
@property bool dirty;
@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } homographyToReference;
@property (retain) <MTLTexture> *luma;
@property (retain) NSDictionary *metadata;
@property (retain) <MTLTexture> *weights;

- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })atlasHomography;
- (id)chroma;
- (bool)dirty;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })homographyToReference;
- (id)initWithContext:(id)arg1 stagingWidth:(unsigned long long)arg2 stagingHeight:(unsigned long long)arg3 homography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg4 atlasHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg5;
- (id)luma;
- (id)metadata;
- (float)overlapWithAtlasHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setAtlasHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setChroma:(id)arg1;
- (void)setDirty:(bool)arg1;
- (void)setHomographyToReference:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setLuma:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setWeights:(id)arg1;
- (id)weights;

@end
