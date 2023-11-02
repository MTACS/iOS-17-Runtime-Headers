
@interface PRPosterSnapshotBundle : NSObject {
    NSString * _bootSessionidentifier;
    NSURL * _bundleURL;
    PBUIColorStatistics * _colorStatistics;
    NSDictionary * _infoDictionary;
    NSDictionary * _levelToImage;
}

@property (readonly) struct CGSize { double x1; double x2; } assetSize;
@property (readonly, copy) UIImage *backgroundSnapshot;
@property (readonly, copy) NSString *bootSessionidentifier;
@property (readonly, copy) NSURL *bundleURL;
@property (nonatomic, readonly) PBUIColorStatistics *colorStatistics;
@property (readonly, copy) UIImage *compositeSnapshot;
@property (readonly, copy) NSDate *dateCreated;
@property (readonly) long long deviceOrientation;
@property (readonly, copy) UIImage *floatingSnapshot;
@property (readonly, copy) UIImage *foregroundSnapshot;
@property (readonly, copy) NSString *hardwareIdentifier;
@property (readonly, copy) NSDictionary *infoDictionary;
@property (readonly) long long interfaceOrientation;
@property (readonly) bool isValidBundle;
@property (nonatomic, readonly) PBUIImageOnDiskFormat *ondiskFormat;
@property (readonly, copy) NSString *posterProvider;
@property (readonly, copy) NSUUID *posterUUID;
@property (readonly) unsigned long long posterVersion;
@property (readonly) unsigned long long snapshotBundleVersion;
@property (readonly, copy) NSString *snapshotDefinitionIdentifier;
@property (readonly) unsigned long long snapshotEpoch;
@property (readonly, copy) NSArray *snapshotLevelSets;
@property (readonly) double snapshotScale;
@property (readonly) long long userInterfaceStyle;

+ (id)currentSnapshotBundleEpochAndVersion;
+ (id)dateFormatter;
+ (id)snapshotBundleAtURL:(id)arg1 error:(out id*)arg2;
+ (id)snapshotBundleForInfoDictionary:(id)arg1 levelToImage:(id)arg2 colorStatistics:(id)arg3 error:(out id*)arg4;

- (void).cxx_destruct;
- (id)URLForComponent:(long long)arg1;
- (id)_decodeImageForComponent:(long long)arg1 error:(out id*)arg2;
- (id)_decodeImageForLevelSet:(id)arg1 error:(out id*)arg2;
- (struct CGSize { double x1; double x2; })assetSize;
- (id)backgroundSnapshot;
- (id)bootSessionidentifier;
- (id)bundleURL;
- (id)colorStatistics;
- (id)compositeSnapshot;
- (id)dateCreated;
- (id)description;
- (long long)deviceOrientation;
- (id)floatingSnapshot;
- (id)foregroundSnapshot;
- (id)hardwareIdentifier;
- (id)imageForComponent:(long long)arg1;
- (id)infoDictionary;
- (id)initWithInfoDictionary:(id)arg1 levelToImage:(id)arg2;
- (id)initWithInfoDictionary:(id)arg1 levelToImage:(id)arg2 colorStatistics:(id)arg3;
- (id)initWithURL:(id)arg1;
- (long long)interfaceOrientation;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSnapshotBundle:(id)arg1;
- (bool)isValidBundle;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)ondiskFormat;
- (id)posterProvider;
- (id)posterUUID;
- (unsigned long long)posterVersion;
- (bool)setInfoDictionary:(id)arg1 error:(out id*)arg2;
- (unsigned long long)snapshotBundleVersion;
- (id)snapshotDefinitionIdentifier;
- (unsigned long long)snapshotEpoch;
- (id)snapshotForLevelSet:(id)arg1;
- (id)snapshotLevelSets;
- (double)snapshotScale;
- (bool)updateInfoDictionary:(id)arg1 error:(out id*)arg2;
- (long long)userInterfaceStyle;

@end
