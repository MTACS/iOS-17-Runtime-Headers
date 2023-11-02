
@interface PISegmentationContextInfo : NSObject {
    long long  _infillAlgorithm;
    PFWallpaperCompoundDeviceConfiguration * _layoutConfiguration;
    unsigned long long  _role;
    bool  _segmentationDisabled;
    long long  _sourceMode;
    NSString * _systemBuildVersion;
    NSString * _systemName;
    NSString * _systemVersion;
    unsigned long long  _version;
}

@property (nonatomic) long long infillAlgorithm;
@property (nonatomic, retain) PFWallpaperCompoundDeviceConfiguration *layoutConfiguration;
@property (nonatomic) unsigned long long role;
@property (nonatomic) bool segmentationDisabled;
@property (nonatomic) long long sourceMode;
@property (nonatomic, copy) NSString *systemBuildVersion;
@property (nonatomic, copy) NSString *systemName;
@property (nonatomic, copy) NSString *systemVersion;
@property (nonatomic) unsigned long long version;

+ (id)currentContextInfo;

- (void).cxx_destruct;
- (long long)infillAlgorithm;
- (id)layoutConfiguration;
- (unsigned long long)role;
- (bool)segmentationDisabled;
- (void)setInfillAlgorithm:(long long)arg1;
- (void)setLayoutConfiguration:(id)arg1;
- (void)setRole:(unsigned long long)arg1;
- (void)setSegmentationDisabled:(bool)arg1;
- (void)setSourceMode:(long long)arg1;
- (void)setSystemBuildVersion:(id)arg1;
- (void)setSystemName:(id)arg1;
- (void)setSystemVersion:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (long long)sourceMode;
- (id)systemBuildVersion;
- (id)systemName;
- (id)systemVersion;
- (unsigned long long)version;

@end
