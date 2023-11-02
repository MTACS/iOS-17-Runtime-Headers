
@interface PFPhotoSharingOperation : NSOperation {
    PFAssetAdjustments * __adjustments;
    NSString * _customAccessibilityLabel;
    NSString * _customCaption;
    NSDate * _customDate;
    CLLocation * _customLocation;
    NSObject<OS_dispatch_queue> * _externalIsolation;
    NSURL * _imageURL;
    bool  _operationComplete;
    NSError * _operationError;
    bool  _operationSuccess;
    NSURL * _outputDirectoryURL;
    NSString * _outputFilename;
    NSURL * _resultingFileURL;
    bool  _shouldConvertToSRGB;
    bool  _shouldStripAccessibilityDescription;
    bool  _shouldStripCaption;
    bool  _shouldStripLocation;
    bool  _shouldStripMetadata;
}

@property (setter=_setAdjustments:, nonatomic, retain) PFAssetAdjustments *_adjustments;
@property (nonatomic, copy) NSString *customAccessibilityLabel;
@property (nonatomic, copy) NSString *customCaption;
@property (nonatomic, copy) NSDate *customDate;
@property (nonatomic, copy) CLLocation *customLocation;
@property (setter=_setImageURL:, nonatomic, copy) NSURL *imageURL;
@property (nonatomic, readonly) NSError *operationError;
@property (nonatomic, copy) NSURL *outputDirectoryURL;
@property (nonatomic, copy) NSString *outputFilename;
@property (nonatomic, readonly) float progress;
@property (nonatomic, readonly, copy) NSURL *resultingFileURL;
@property (nonatomic) bool shouldConvertToSRGB;
@property (nonatomic) bool shouldStripAccessibilityDescription;
@property (nonatomic) bool shouldStripCaption;
@property (nonatomic) bool shouldStripLocation;
@property (nonatomic) bool shouldStripMetadata;
@property (nonatomic, readonly) bool success;

+ (id)operationErrorWithCode:(long long)arg1 withDescription:(id)arg2;
+ (bool)outputSupportedForTypeIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_adjustments;
- (void)_setAdjustments:(id)arg1;
- (void)_setImageURL:(id)arg1;
- (id)customAccessibilityLabel;
- (id)customCaption;
- (id)customDate;
- (id)customLocation;
- (id)imageURL;
- (id)initWithImageURL:(id)arg1 adjustmentData:(id)arg2;
- (void)main;
- (id)operationError;
- (id)outputDirectoryURL;
- (id)outputFilename;
- (float)progress;
- (id)resultingFileURL;
- (void)setCustomAccessibilityLabel:(id)arg1;
- (void)setCustomCaption:(id)arg1;
- (void)setCustomDate:(id)arg1;
- (void)setCustomLocation:(id)arg1;
- (void)setOutputDirectoryURL:(id)arg1;
- (void)setOutputFilename:(id)arg1;
- (void)setShouldConvertToSRGB:(bool)arg1;
- (void)setShouldStripAccessibilityDescription:(bool)arg1;
- (void)setShouldStripCaption:(bool)arg1;
- (void)setShouldStripLocation:(bool)arg1;
- (void)setShouldStripMetadata:(bool)arg1;
- (bool)shouldConvertToSRGB;
- (bool)shouldStripAccessibilityDescription;
- (bool)shouldStripCaption;
- (bool)shouldStripLocation;
- (bool)shouldStripMetadata;
- (bool)success;

@end
