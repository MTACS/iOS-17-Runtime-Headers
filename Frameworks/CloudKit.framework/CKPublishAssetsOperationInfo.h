
@interface CKPublishAssetsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    unsigned long long  _URLOptions;
    NSDictionary * _fileNamesByAssetFieldNames;
    NSArray * _recordIDs;
    unsigned long long  _requestedTTL;
}

@property (nonatomic) unsigned long long URLOptions;
@property (nonatomic, retain) NSDictionary *fileNamesByAssetFieldNames;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic) unsigned long long requestedTTL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)URLOptions;
- (void)encodeWithCoder:(id)arg1;
- (id)fileNamesByAssetFieldNames;
- (id)initWithCoder:(id)arg1;
- (id)recordIDs;
- (unsigned long long)requestedTTL;
- (void)setFileNamesByAssetFieldNames:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRequestedTTL:(unsigned long long)arg1;
- (void)setURLOptions:(unsigned long long)arg1;

@end
