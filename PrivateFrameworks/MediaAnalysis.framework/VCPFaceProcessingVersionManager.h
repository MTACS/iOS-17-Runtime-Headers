
@interface VCPFaceProcessingVersionManager : NSObject {
    PHPhotoLibrary * _photoLibrary;
    NSDictionary * _versionState;
}

+ (id)resetLevelDescription:(long long)arg1;
+ (id)sharedManagerForPhotoLibrary:(id)arg1;

- (void).cxx_destruct;
- (int)_updateCurrentProcessingVersion:(int)arg1;
- (bool)_updateVersionStateFileWithError:(id*)arg1;
- (id)_versionStateURL;
- (int)currentProcessingVersion;
- (int)defaultProcessingVersion;
- (id)initWithPhotoLibrary:(id)arg1;
- (int)migrateFaceProcessingToVersion:(int)arg1;
- (int)resetAnalysisDataWithResetLevel:(long long)arg1 error:(id*)arg2;

@end
