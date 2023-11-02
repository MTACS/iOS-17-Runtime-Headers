
@interface DCSettings : NSObject {
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) bool enableViewService;
@property (nonatomic, readonly) bool finishAfterFirstScan;
@property (nonatomic, readonly) double imageQuality;
@property (nonatomic, readonly) bool useDocumentSegmentationRequest;
@property (retain) NSUserDefaults *userDefaults;

+ (id)sharedSettings;

- (void).cxx_destruct;
- (bool)enableViewService;
- (id)enableViewServiceBoxed;
- (bool)finishAfterFirstScan;
- (id)finishAfterFirstScanBoxed;
- (double)imageQuality;
- (id)imageQualityBoxed;
- (id)init;
- (void)setEnableViewServiceBoxed:(id)arg1;
- (void)setFinishAfterFirstScanBoxed:(id)arg1;
- (void)setImageQualityBoxed:(id)arg1;
- (void)setUseDocumentSegmentationRequestBoxed:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (bool)useDocumentSegmentationRequest;
- (id)useDocumentSegmentationRequestBoxed;
- (id)userDefaults;

@end
