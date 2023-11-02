
@interface PRPosterSnapshotBundleBuilder : NSObject {
    NSMutableDictionary * _URLResourceKeys;
    NSMutableDictionary * _URLResourceValues;
    PBUIColorStatistics * _colorStatistics;
    long long  _deviceOrientation;
    NSMutableDictionary * _fileAttributes;
    NSString * _hardwareIdentifier;
    NSMutableDictionary * _infoDictionary;
    long long  _interfaceOrientation;
    NSMutableDictionary * _levelToImage;
    long long  _userInterfaceStyle;
}

@property (nonatomic, copy) NSMutableDictionary *URLResourceValues;
@property (nonatomic, readonly) PBUIColorStatistics *capturedColorStatistics;
@property (nonatomic, readonly) NSSet *capturedSnapshotLevelSets;
@property (nonatomic, copy) NSMutableDictionary *fileAttributes;
@property (nonatomic, retain) NSMutableDictionary *infoDictionary;

- (void).cxx_destruct;
- (id)URLResourceValues;
- (id)_finalizedInfoPlistDictionaryWithSnapshotImageFormat:(id)arg1;
- (id)buildWithError:(out id*)arg1;
- (id)buildWithOutputURL:(id)arg1 diskFormat:(id)arg2 error:(out id*)arg3;
- (bool)captureColorStatistics:(id)arg1 error:(out id*)arg2;
- (bool)captureSnapshot:(id)arg1 forLevelSet:(id)arg2 error:(out id*)arg3;
- (id)capturedColorStatistics;
- (id)capturedSnapshotForLevelSet:(id)arg1;
- (id)capturedSnapshotLevelSets;
- (id)fileAttributes;
- (id)infoDictionary;
- (id)initWithHardwareIdentifier:(id)arg1 userInterfaceStyle:(long long)arg2 interfaceOrientation:(long long)arg3 deviceOrientation:(long long)arg4;
- (id)initWithSnapshotBundle:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)reset;
- (void)setFileAttributes:(id)arg1;
- (void)setInfoDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setURLResourceValues:(id)arg1;
- (void)updateWithPoster:(id)arg1;

@end
