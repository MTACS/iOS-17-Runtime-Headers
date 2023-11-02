
@interface CSAssetDownloadingOption : NSObject {
    bool  _allowAdBlockerAssetDownloading;
    bool  _allowEndpointAssetDownloading;
    bool  _allowGibraltarVoiceTriggerAssetDownloading;
    bool  _allowLanguageDetectorAssetDownloading;
    bool  _allowSpeakerRecognitionAssetDownloading;
    bool  _allowVoiceTriggerAccessoryAssetDownloading;
    bool  _allowVoiceTriggerAssetDownloading;
}

@property (nonatomic) bool allowAdBlockerAssetDownloading;
@property (nonatomic) bool allowEndpointAssetDownloading;
@property (nonatomic) bool allowGibraltarVoiceTriggerAssetDownloading;
@property (nonatomic) bool allowLanguageDetectorAssetDownloading;
@property (nonatomic) bool allowSpeakerRecognitionAssetDownloading;
@property (nonatomic) bool allowVoiceTriggerAccessoryAssetDownloading;
@property (nonatomic) bool allowVoiceTriggerAssetDownloading;

- (bool)allowAdBlockerAssetDownloading;
- (bool)allowEndpointAssetDownloading;
- (bool)allowGibraltarVoiceTriggerAssetDownloading;
- (bool)allowLanguageDetectorAssetDownloading;
- (bool)allowSpeakerRecognitionAssetDownloading;
- (bool)allowVoiceTriggerAccessoryAssetDownloading;
- (bool)allowVoiceTriggerAssetDownloading;
- (id)description;
- (id)init;
- (void)setAllowAdBlockerAssetDownloading:(bool)arg1;
- (void)setAllowEndpointAssetDownloading:(bool)arg1;
- (void)setAllowGibraltarVoiceTriggerAssetDownloading:(bool)arg1;
- (void)setAllowLanguageDetectorAssetDownloading:(bool)arg1;
- (void)setAllowSpeakerRecognitionAssetDownloading:(bool)arg1;
- (void)setAllowVoiceTriggerAccessoryAssetDownloading:(bool)arg1;
- (void)setAllowVoiceTriggerAssetDownloading:(bool)arg1;

@end
