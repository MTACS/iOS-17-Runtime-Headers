
@interface HKElectrocardiogramMetadataView : UIView {
    bool  _allowExportToPDF;
    <HKElectrocardiogramMetadataViewDelegate> * _delegate;
    bool  _displayGraph;
    bool  _isSharedData;
    HKElectrocardiogram * _sample;
}

@property (nonatomic, readonly) bool allowExportToPDF;
@property (nonatomic) <HKElectrocardiogramMetadataViewDelegate> *delegate;
@property (nonatomic, readonly) bool displayGraph;
@property (nonatomic, readonly) bool isSharedData;
@property (nonatomic, readonly) HKElectrocardiogram *sample;

- (void).cxx_destruct;
- (id)_bulletedTextView;
- (id)_ecgChart;
- (id)_footerLabel;
- (id)_separatorLine;
- (void)_setupUIWithActiveAlgorithmVersion:(long long)arg1;
- (id)_sharePDFControl;
- (bool)allowExportToPDF;
- (id)delegate;
- (void)detailButtonTapped:(id)arg1;
- (bool)displayGraph;
- (id)initWithSample:(id)arg1 activeAlgorithmVersion:(long long)arg2 displayGraph:(bool)arg3 allowExportToPDF:(bool)arg4 isSharedData:(bool)arg5 delegate:(id)arg6;
- (bool)isSharedData;
- (id)sample;
- (void)setDelegate:(id)arg1;
- (void)sharedPDFControlTapped:(id)arg1;

@end
