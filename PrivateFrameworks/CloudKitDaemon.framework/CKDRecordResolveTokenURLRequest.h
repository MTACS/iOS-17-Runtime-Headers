
@interface CKDRecordResolveTokenURLRequest : CKDURLRequest {
    NSArray * _lookupInfos;
    NSMutableDictionary * _lookupInfosByRequestID;
    CKDProtocolTranslator * _privateDBTranslator;
    NSSet * _rootRecordDesiredKeySet;
    bool  _shouldFetchRootRecord;
    id /* block */  _tokenResolveBlock;
}

@property (nonatomic, retain) NSArray *lookupInfos;
@property (nonatomic, retain) NSMutableDictionary *lookupInfosByRequestID;
@property (nonatomic, retain) CKDProtocolTranslator *privateDBTranslator;
@property (nonatomic, retain) NSSet *rootRecordDesiredKeySet;
@property (nonatomic) bool shouldFetchRootRecord;
@property (nonatomic, copy) id /* block */ tokenResolveBlock;

- (void).cxx_destruct;
- (id)applicationBundleIdentifierForContainerAccess;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (long long)databaseScope;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 shortTokenLookupInfos:(id)arg2;
- (id)lookupInfos;
- (id)lookupInfosByRequestID;
- (id)privateDBTranslator;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (bool)requiresCKAnonymousUserIDs;
- (id)rootRecordDesiredKeySet;
- (bool)sendRequestAnonymously;
- (void)setLookupInfos:(id)arg1;
- (void)setLookupInfosByRequestID:(id)arg1;
- (void)setPrivateDBTranslator:(id)arg1;
- (void)setRootRecordDesiredKeySet:(id)arg1;
- (void)setShouldFetchRootRecord:(bool)arg1;
- (void)setTokenResolveBlock:(id /* block */)arg1;
- (bool)shouldFetchRootRecord;
- (id)sourceApplicationSecondaryIdentifier;
- (id /* block */)tokenResolveBlock;

@end
