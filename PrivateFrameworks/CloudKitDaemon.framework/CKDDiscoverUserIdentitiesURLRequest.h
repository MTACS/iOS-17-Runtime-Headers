
@interface CKDDiscoverUserIdentitiesURLRequest : CKDURLRequest {
    bool  _adopterProvidedLookupInfos;
    NSArray * _infosToDiscover;
    id /* block */  _progressBlock;
    NSMutableDictionary * _submittedInfos;
    bool  _wantsProtectionInfo;
}

@property (nonatomic, readonly) bool adopterProvidedLookupInfos;
@property (nonatomic, readonly) NSArray *infosToDiscover;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic, readonly) NSMutableDictionary *submittedInfos;
@property (nonatomic) bool wantsProtectionInfo;

- (void).cxx_destruct;
- (bool)adopterProvidedLookupInfos;
- (long long)databaseScope;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)generateRequestOperations;
- (id)infosToDiscover;
- (id)initWithOperation:(id)arg1 lookupInfos:(id)arg2 adopterProvidedLookupInfos:(bool)arg3;
- (id /* block */)progressBlock;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setWantsProtectionInfo:(bool)arg1;
- (id)submittedInfos;
- (bool)wantsProtectionInfo;

@end
