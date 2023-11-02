
@interface CKDFetchRecordsURLRequest : CKDURLRequest {
    unsigned long long  _URLOptions;
    NSSet * _assetFieldNamesToPublishURLs;
    NSSet * _desiredAssetKeys;
    NSArray * _desiredIndexedListKeys;
    NSSet * _desiredKeys;
    unsigned long long  _recordCount;
    id /* block */  _recordFetchedBlock;
    NSMutableDictionary * _recordIDByRequestID;
    NSArray * _recordIDs;
    NSDictionary * _recordIDsToETags;
    NSDictionary * _recordIDsToVersionETags;
    unsigned long long  _requestedTTL;
    bool  _shouldFetchAssetContent;
}

@property (nonatomic) unsigned long long URLOptions;
@property (nonatomic, retain) NSSet *assetFieldNamesToPublishURLs;
@property (nonatomic, retain) NSSet *desiredAssetKeys;
@property (nonatomic, retain) NSArray *desiredIndexedListKeys;
@property (nonatomic, retain) NSSet *desiredKeys;
@property (nonatomic) unsigned long long recordCount;
@property (nonatomic, copy) id /* block */ recordFetchedBlock;
@property (nonatomic, retain) NSMutableDictionary *recordIDByRequestID;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic, retain) NSDictionary *recordIDsToETags;
@property (nonatomic, retain) NSDictionary *recordIDsToVersionETags;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) bool shouldFetchAssetContent;

- (void).cxx_destruct;
- (unsigned long long)URLOptions;
- (bool)allowsAnonymousAccount;
- (id)assetFieldNamesToPublishURLs;
- (id)desiredAssetKeys;
- (id)desiredIndexedListKeys;
- (id)desiredKeys;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateRequestOperations;
- (bool)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)arg1 recordIDs:(id)arg2 recordIDsToEtags:(id)arg3 recordIDsToVersionETags:(id)arg4 desiredKeys:(id)arg5;
- (unsigned long long)recordCount;
- (id /* block */)recordFetchedBlock;
- (id)recordIDByRequestID;
- (id)recordIDs;
- (id)recordIDsToETags;
- (id)recordIDsToVersionETags;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (bool)requestGETPreAuth;
- (id)requestOperationClasses;
- (id)requestedListFieldsForDesiredIndexedListKeys;
- (unsigned long long)requestedTTL;
- (void)setAssetFieldNamesToPublishURLs:(id)arg1;
- (void)setDesiredAssetKeys:(id)arg1;
- (void)setDesiredIndexedListKeys:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setRecordCount:(unsigned long long)arg1;
- (void)setRecordFetchedBlock:(id /* block */)arg1;
- (void)setRecordIDByRequestID:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRecordIDsToETags:(id)arg1;
- (void)setRecordIDsToVersionETags:(id)arg1;
- (void)setRequestedTTL:(unsigned long long)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (void)setURLOptions:(unsigned long long)arg1;
- (bool)shouldFetchAssetContent;
- (id)zoneIDsToLock;

@end
