
@interface TSDBrushStrokeLoader : NSObject {
    NSMutableDictionary * _bounds;
    NSMutableDictionary * _images;
    NSMutableDictionary * _lineEnds;
    NSMutableDictionary * _options;
    NSMutableDictionary * _paths;
    NSMutableDictionary * _textureIndex;
}

+ (id)brushStrokeLoaderForCurrentThread;
+ (double)p_brushPixelScaleAt100Percent;
+ (id)p_brushStrokeLoadQueue;
+ (id)p_cacheDirectory;

- (void).cxx_destruct;
- (id)boundsForStroke:(id)arg1;
- (id)imageForStroke:(id)arg1;
- (id)lineEnd:(id)arg1 forStroke:(id)arg2;
- (id)optionsForStroke:(id)arg1;
- (void)p_loadBrushIfNeeded:(id)arg1;
- (id)p_loadImageForBrush:(id)arg1;
- (void)p_loadLineEndTextureForBrush:(id)arg1 lineEnd:(id)arg2 path:(struct CGPath { }*)arg3 andBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)p_loadLineEndsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg2;
- (void)p_loadSectionsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg2;
- (id)pathsForStroke:(id)arg1;
- (id)textureIndexForStroke:(id)arg1;

@end
