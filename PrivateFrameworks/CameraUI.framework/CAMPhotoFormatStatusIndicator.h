
@interface CAMPhotoFormatStatusIndicator : CAMExpandingControl {
    unsigned long long  __advancedFormatIndex;
    unsigned long long  __essentialFormatIndex;
    struct { 
        long long encoding; 
        long long resolution; 
    }  _advancedFormat;
    NSArray * _allowedFormats;
    struct { 
        long long encoding; 
        long long resolution; 
    }  _essentialFormat;
}

@property (setter=_setAdvancedFormatIndex:, nonatomic) unsigned long long _advancedFormatIndex;
@property (setter=_setEssentialFormatIndex:, nonatomic) unsigned long long _essentialFormatIndex;
@property (nonatomic, readonly) struct { long long x1; long long x2; } advancedFormat;
@property (nonatomic, readonly, copy) NSArray *allowedFormats;
@property (nonatomic, readonly) long long encoding;
@property (nonatomic, readonly) struct { long long x1; long long x2; } essentialFormat;
@property (nonatomic) struct { long long x1; long long x2; } photoFormat;
@property (nonatomic, readonly) long long resolution;

+ (id)localizedTitleForFormat:(struct { long long x1; long long x2; })arg1;

- (void).cxx_destruct;
- (unsigned long long)_advancedFormatIndex;
- (unsigned long long)_essentialFormatIndex;
- (void)_setAdvancedFormatIndex:(unsigned long long)arg1;
- (void)_setEssentialFormatIndex:(unsigned long long)arg1;
- (struct { long long x1; long long x2; })advancedFormat;
- (id)allowedFormats;
- (long long)encoding;
- (struct { long long x1; long long x2; })essentialFormat;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { long long x1; long long x2; })photoFormat;
- (long long)resolution;
- (void)setAllowedFormats:(id)arg1 essentialFormatIndex:(unsigned long long)arg2 advancedFormatIndex:(unsigned long long)arg3;
- (void)setPhotoFormat:(struct { long long x1; long long x2; })arg1;
- (void)setPhotoFormat:(struct { long long x1; long long x2; })arg1 animated:(bool)arg2;

@end
