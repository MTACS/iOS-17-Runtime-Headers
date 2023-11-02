
@interface PDFRenderingProperties : NSObject {
    PDFRenderingPropertiesPrivate * _private;
}

@property (nonatomic) struct CGColorSpace { }*deviceColorSpace;
@property (nonatomic) long long displayBox;
@property (nonatomic) bool enableBackgroundImages;
@property (nonatomic) bool enablePageShadows;
@property (nonatomic) bool enableTileUpdates;
@property (nonatomic) double greekingThreshold;
@property (nonatomic) long long interpolationQuality;
@property (nonatomic) bool isUsingPDFExtensionView;
@property (nonatomic) double lineWidthThreshold;
@property (nonatomic, retain) UIColor *pageColor;
@property (setter=setPDFLayerController:, nonatomic) PDFLayerController *pdfLayerController;
@property (setter=setPDFView:, nonatomic) PDFView *pdfView;
@property (nonatomic) double screenScaleFactor;
@property (nonatomic) bool shouldAntiAlias;

- (void).cxx_destruct;
- (void)_notifyPropertyChanged:(long long)arg1;
- (void)dealloc;
- (struct CGColorSpace { }*)deviceColorSpace;
- (long long)displayBox;
- (bool)enableBackgroundImages;
- (bool)enablePageShadows;
- (bool)enableTileUpdates;
- (double)greekingThreshold;
- (id)init;
- (long long)interpolationQuality;
- (bool)isUsingPDFExtensionView;
- (double)lineWidthThreshold;
- (id)pageColor;
- (id)pdfLayerController;
- (id)pdfView;
- (double)screenScaleFactor;
- (void)setDeviceColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setDisplayBox:(long long)arg1;
- (void)setEnableBackgroundImages:(bool)arg1;
- (void)setEnablePageShadows:(bool)arg1;
- (void)setEnableTileUpdates:(bool)arg1;
- (void)setGreekingThreshold:(double)arg1;
- (void)setInterpolationQuality:(long long)arg1;
- (void)setIsUsingPDFExtensionView:(bool)arg1;
- (void)setLineWidthThreshold:(double)arg1;
- (void)setPDFLayerController:(id)arg1;
- (void)setPDFView:(id)arg1;
- (void)setPageColor:(id)arg1;
- (void)setScreenScaleFactor:(double)arg1;
- (void)setShouldAntiAlias:(bool)arg1;
- (bool)shouldAntiAlias;

@end