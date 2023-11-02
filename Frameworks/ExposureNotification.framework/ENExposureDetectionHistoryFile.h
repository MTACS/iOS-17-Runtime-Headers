
@interface ENExposureDetectionHistoryFile : NSObject <CUXPCCodable> {
    NSData * _fileHash;
    NSNumber * _keyCount;
    NSNumber * _matchCount;
    NSDictionary * _metadata;
    NSDate * _processDate;
    NSString * _sourceAppBundleIdentifier;
    ENRegion * _sourceRegion;
}

@property (nonatomic, copy) NSData *fileHash;
@property (nonatomic, copy) NSNumber *keyCount;
@property (nonatomic, copy) NSNumber *matchCount;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, copy) NSDate *processDate;
@property (nonatomic, copy) NSString *sourceAppBundleIdentifier;
@property (nonatomic, copy) ENRegion *sourceRegion;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithXPCObject:(id)arg1;
- (id)fileHash;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (id)keyCount;
- (id)matchCount;
- (id)metadata;
- (id)processDate;
- (void)setFileHash:(id)arg1;
- (void)setKeyCount:(id)arg1;
- (void)setMatchCount:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setProcessDate:(id)arg1;
- (void)setSourceAppBundleIdentifier:(id)arg1;
- (void)setSourceRegion:(id)arg1;
- (id)sourceAppBundleIdentifier;
- (id)sourceRegion;

@end
