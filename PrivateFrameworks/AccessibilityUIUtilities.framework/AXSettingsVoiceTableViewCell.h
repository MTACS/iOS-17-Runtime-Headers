
@interface AXSettingsVoiceTableViewCell : PSTableCell <SKUIItemOfferButtonDelegate> {
    SKUIItemOfferButton * _downloadButton;
    bool  _indentsForVoiceGraphic;
    <AXResourceDownloadInformationDelegate> * _infoDelegate;
    UILabel * _infoLabel;
    UIButton * _perVoiceSettingsButton;
    SKUIItemOfferButton * _sampleButton;
    bool  _showsInfoLabel;
    bool  _showsPerVoiceSettingsButton;
    bool  _showsPlayButton;
    bool  _showsUsageInfo;
    UIImageView * _siriImageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool indentsForVoiceGraphic;
@property (nonatomic) <AXResourceDownloadInformationDelegate> *infoDelegate;
@property (nonatomic) bool showsInfoLabel;
@property (nonatomic) bool showsPerVoiceSettingsButton;
@property (nonatomic) bool showsPlayButton;
@property (nonatomic) bool showsUsageInfo;
@property (nonatomic, retain) UIImageView *siriImageView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_axDownload;
- (bool)_axPerVoiceSettings;
- (void)_axPlaySample;
- (void)_axShowCloudImageFor:(id)arg1;
- (void)_updateInfoLabelText;
- (bool)accessibilityActivate;
- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)colorFromHexString:(id)arg1 alpha:(float)arg2;
- (bool)indentsForVoiceGraphic;
- (id)infoDelegate;
- (id)infoLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (bool)isAccessibilityElement;
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)resources;
- (void)setIndentsForVoiceGraphic:(bool)arg1;
- (void)setInfoDelegate:(id)arg1;
- (void)setShowsInfoLabel:(bool)arg1;
- (void)setShowsPerVoiceSettingsButton:(bool)arg1;
- (void)setShowsPlayButton:(bool)arg1;
- (void)setShowsUsageInfo:(bool)arg1;
- (void)setSiriImageView:(id)arg1;
- (bool)showsInfoLabel;
- (bool)showsPerVoiceSettingsButton;
- (bool)showsPlayButton;
- (bool)showsUsageInfo;
- (id)siriImageView;
- (void)updateInformation;

@end
