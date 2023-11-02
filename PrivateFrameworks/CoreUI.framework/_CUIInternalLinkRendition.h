
@interface _CUIInternalLinkRendition : CUIThemeRendition {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _alphaCroppedFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    struct CGImage {} * _image;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageRect;
    unsigned int  _nimages;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalUncroppedSize;
    CUIRenditionKey * _referenceKey;
    CUIRenditionMetrics * _renditionMetrics;
    CUIRenditionSliceInformation * _sliceInformation;
    CUIStructuredThemeStore * _sourceProvider;
    struct CGImage { } * _unslicedImage;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_destinationFrame;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1 version:(unsigned int)arg2;
- (void)_setStructuredThemeStore:(id)arg1;
- (id)_sourceRendition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alphaCroppedRect;
- (int)bitmapEncoding;
- (id)data;
- (void)dealloc;
- (bool)edgesOnly;
- (id)imageForSliceIndex:(long long)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 version:(unsigned int)arg3;
- (bool)isInternalLink;
- (bool)isOpaque;
- (bool)isScaled;
- (bool)isTiled;
- (id)linkingToRendition;
- (id)maskForSliceIndex:(long long)arg1;
- (id)metrics;
- (struct CGSize { double x1; double x2; })originalUncroppedSize;
- (int)pixelFormat;
- (id)properties;
- (id)sliceInformation;
- (struct CGImage { }*)unslicedImage;
- (struct CGSize { double x1; double x2; })unslicedSize;

@end
