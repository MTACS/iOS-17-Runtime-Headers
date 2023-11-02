
@interface ENExposureDetectionHistorySession : NSObject <CUXPCCodable> {
    NSUUID * _UUID;
    NSString * _appBundleIdentifier;
    NSDate * _date;
    NSString * _exposureClassificationIdentifier;
    unsigned long long  _fileCount;
    unsigned long long  _matchCount;
    ENRegion * _region;
    NSString * _systemBuildVersion;
}

@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *exposureClassificationIdentifier;
@property (nonatomic) unsigned long long fileCount;
@property (nonatomic) unsigned long long matchCount;
@property (nonatomic, copy) ENRegion *region;
@property (nonatomic, copy) NSString *systemBuildVersion;

- (void).cxx_destruct;
- (id)UUID;
- (id)appBundleIdentifier;
- (id)date;
- (id)description;
- (void)encodeWithXPCObject:(id)arg1;
- (id)exposureClassificationIdentifier;
- (unsigned long long)fileCount;
- (id)init;
- (id)initWithUUID:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (unsigned long long)matchCount;
- (id)region;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setExposureClassificationIdentifier:(id)arg1;
- (void)setFileCount:(unsigned long long)arg1;
- (void)setMatchCount:(unsigned long long)arg1;
- (void)setRegion:(id)arg1;
- (void)setSystemBuildVersion:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)systemBuildVersion;

@end
