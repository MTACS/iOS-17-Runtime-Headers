
@interface _CUIThemePixelRendition : CUIThemeRendition {
    _CSIRenditionBlockData * _cachedBlockDataBGRX;
    _CSIRenditionBlockData * _cachedBlockDataGray;
    _CSIRenditionBlockData * _cachedBlockDataRGBX;
    struct CGImage {} * _image;
    NSMutableArray * _layers;
    unsigned int  _nimages;
    CUIRenditionMetrics * _renditionMetrics;
    CUIRenditionSliceInformation * _sliceInformation;
    unsigned long long  _sourceRowbytes;
    struct CGImage { } * _unslicedImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _unslicedSize;
}

- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1 version:(unsigned int)arg2;
- (id)copySharedBlockDataWithPixelFormat:(int)arg1;
- (void)dealloc;
- (bool)edgesOnly;
- (id)imageForSliceIndex:(long long)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 version:(unsigned int)arg3;
- (bool)isScaled;
- (bool)isTiled;
- (id)layerReferences;
- (id)maskForSliceIndex:(long long)arg1;
- (id)metrics;
- (int)pixelFormat;
- (void)setSharedBlockData:(id)arg1;
- (id)sliceInformation;
- (unsigned long long)sourceRowbytes;
- (struct CGImage { }*)unslicedImage;
- (struct CGSize { double x1; double x2; })unslicedSize;

@end
