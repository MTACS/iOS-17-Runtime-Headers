
@interface NUTiledImageLayer : CALayer <CALayerDelegate> {
    NUImageGeometry * __geometry;
    <NUPurgeableTextureImage> * __image;
    NSMutableArray * __tileLayers;
    struct CGColor { } * _debugColor;
    struct { 
        long long x; 
        long long y; 
    }  _validRegionInsets;
}

@property (retain) NUImageGeometry *_geometry;
@property (retain) <NUPurgeableTextureImage> *_image;
@property (retain) NSMutableArray *_tileLayers;
@property (retain) struct CGColor { }*debugColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NUImageGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (retain) <NUTextureImage> *image;
@property (nonatomic, readonly) bool nu_contentsAreFlipped;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; long long x2; } validRegionInsets;

+ (id)defaultActionForKey:(id)arg1;

- (void).cxx_destruct;
- (id)_geometry;
- (id)_image;
- (id)_tileLayers;
- (void)_updateSublayers;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (struct CGColor { }*)debugColor;
- (id)debugDescription;
- (id)geometry;
- (id)image;
- (id)init;
- (void)layoutSublayers;
- (bool)nu_contentsAreFlipped;
- (void)setDebugColor:(struct CGColor { }*)arg1;
- (void)setGeometry:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setValidRegionInsets:(struct { long long x1; long long x2; })arg1;
- (void)set_geometry:(id)arg1;
- (void)set_image:(id)arg1;
- (void)set_tileLayers:(id)arg1;
- (id)snapshotImage;
- (struct { long long x1; long long x2; })validRegionInsets;

@end
