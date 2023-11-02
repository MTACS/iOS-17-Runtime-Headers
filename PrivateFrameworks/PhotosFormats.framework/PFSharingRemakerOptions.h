
@interface PFSharingRemakerOptions : NSObject <NSCopying> {
    NSString * _customAccessibilityLabel;
    NSString * _customCaption;
    NSDate * _customDate;
    CLLocation * _customLocation;
    NSString * _exportFileType;
    NSString * _exportPreset;
    NSURL * _outputDirectoryURL;
    NSString * _outputFilename;
    bool  _shouldConvertToSRGB;
    bool  _shouldStripAccessibilityDescription;
    bool  _shouldStripAllMetadata;
    bool  _shouldStripCaption;
    bool  _shouldStripLocation;
}

@property (nonatomic, copy) NSString *customAccessibilityLabel;
@property (nonatomic, copy) NSString *customCaption;
@property (nonatomic, copy) NSDate *customDate;
@property (nonatomic, copy) CLLocation *customLocation;
@property (nonatomic, copy) NSString *exportFileType;
@property (nonatomic, copy) NSString *exportPreset;
@property (nonatomic, copy) NSURL *outputDirectoryURL;
@property (nonatomic, copy) NSString *outputFilename;
@property (nonatomic) bool shouldConvertToSRGB;
@property (nonatomic) bool shouldStripAccessibilityDescription;
@property (nonatomic) bool shouldStripAllMetadata;
@property (nonatomic) bool shouldStripCaption;
@property (nonatomic) bool shouldStripLocation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customAccessibilityLabel;
- (id)customCaption;
- (id)customDate;
- (id)customLocation;
- (id)exportFileType;
- (id)exportPreset;
- (id)outputDirectoryURL;
- (id)outputFilename;
- (void)setCustomAccessibilityLabel:(id)arg1;
- (void)setCustomCaption:(id)arg1;
- (void)setCustomDate:(id)arg1;
- (void)setCustomLocation:(id)arg1;
- (void)setExportFileType:(id)arg1;
- (void)setExportPreset:(id)arg1;
- (void)setOutputDirectoryURL:(id)arg1;
- (void)setOutputFilename:(id)arg1;
- (void)setShouldConvertToSRGB:(bool)arg1;
- (void)setShouldStripAccessibilityDescription:(bool)arg1;
- (void)setShouldStripAllMetadata:(bool)arg1;
- (void)setShouldStripCaption:(bool)arg1;
- (void)setShouldStripLocation:(bool)arg1;
- (bool)shouldConvertToSRGB;
- (bool)shouldStripAccessibilityDescription;
- (bool)shouldStripAllMetadata;
- (bool)shouldStripCaption;
- (bool)shouldStripLocation;

@end
