
@interface _CUIThemeSVGRendition : CUIThemeRendition <NSLocking> {
    struct { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentRectInsets;
    double  _baseline;
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSize;
    double  _capline;
    short  _containsHierarchicalLayers;
    short  _containsMulticolorLayers;
    NSData * _fileData;
    bool  _isAlignmentRect;
    bool  _isInterpolatable;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _renderingMode;
    unsigned int  _standardPointSize;
    struct CGSVGDocument { } * _svgDocument;
    float  _templateVersion;
    NSArray * _vectorSizes;
}

- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1 version:(unsigned int)arg2;
- (void)_initalizeMetadataFromCSIData:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1 version:(unsigned int)arg2;
- (struct CGSize { double x1; double x2; })canvasSize;
- (short)containsHierarchicalLayers;
- (short)containsMulticolorLayers;
- (void)dealloc;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 version:(unsigned int)arg3;
- (bool)isInterpolatable;
- (void)lock;
- (id)metrics;
- (int)pixelFormat;
- (id)rawData;
- (struct CGSVGDocument { }*)svgDocument;
- (void)unlock;
- (struct { double x1; double x2; double x3; double x4; })vectorGlyphAlignmentRectInsets;
- (id)vectorGlyphAvailableSizes;
- (double)vectorGlyphBaseline;
- (double)vectorGlyphCapLine;
- (double)vectorGlyphReferencePointSize;
- (long long)vectorGlyphRenderingMode;
- (float)vectorGlyphTemplateVersion;

@end
