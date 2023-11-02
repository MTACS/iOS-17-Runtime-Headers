
@interface NTKComplicationModuleView : NTKModuleView <CDComplicationDisplay> {
    bool  _isXL;
    bool  canUseCurvedText;
    <CDComplicationDisplayObserver> * displayObserver;
}

@property (nonatomic) bool canUseCurvedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CDComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool isXL;
@property (nonatomic) bool shouldUseTemplateColors;
@property (readonly) Class superclass;

+ (id)_extraLargeAlarmImageProvider;
+ (id)_extraLargeStopwatchImageProviderForDevice:(id)arg1;
+ (id)_imageProviderForImageSymbolName:(id)arg1 imageAssetNamePrefix:(id)arg2;
+ (id)_modularSmallAlarmImageProvider;
+ (id)_modularSmallStopwatchImageProviderForDevice:(id)arg1;
+ (id)largeModuleViewForComplicationType:(unsigned long long)arg1;
+ (long long)layoutOverride;
+ (id)smallModuleViewForComplicationType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_attributeEnDashesWithinString:(id)arg1 typographicTracking:(double)arg2 baseFont:(id)arg3;
- (id)_attributedStringWithText:(id)arg1 typographicTracking:(double)arg2 baseFont:(id)arg3;
- (id)_newImageViewSubview;
- (id)_newLabelSubview;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)_setTypographicTracking:(double)arg1 andFont:(id)arg2 onAttributedString:(id*)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (bool)canUseCurvedText;
- (id)displayObserver;
- (bool)isXL;
- (void)setCanUseCurvedText:(bool)arg1;
- (void)setDisplayObserver:(id)arg1;
- (void)setIsXL:(bool)arg1;

@end
