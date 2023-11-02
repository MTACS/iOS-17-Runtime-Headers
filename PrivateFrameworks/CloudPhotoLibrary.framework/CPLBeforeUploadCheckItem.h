
@interface CPLBeforeUploadCheckItem : NSObject {
    CPLRecordChange * _change;
    Class  _changeClass;
    bool  _checked;
    NSString * _dropReason;
    bool  _hasCachedResultOfServerCheck;
    bool  _isAsset;
    bool  _isTrashedOrDeletedAsset;
    CPLBeforeUploadCheckItems * _items;
    bool  _needsToGenerateImageDerivatives;
    bool  _needsToGenerateVideoComplementDerivatives;
    unsigned long long  _pushRepositoryPriority;
    bool  _recordExistsOnServer;
    CPLRecordChange * _recordOnServer;
    CPLResourceTypeSet * _resourcesToGenerateImageDerivatives;
    CPLResourceTypeSet * _resourcesToGenerateVideoComplementDerivatives;
    long long  _ruleGroups;
    NSMutableDictionary * _rulesForOtherRecordFetches;
    NSMutableSet * _rulesForRecordFetch;
    CPLScopedIdentifier * _scopedIdentifier;
}

@property (nonatomic, readonly) CPLRecordChange *change;
@property (nonatomic, readonly) Class changeClass;
@property (nonatomic, readonly) unsigned long long estimatedResourceUploadSize;
@property (nonatomic, readonly) bool hasRequestedRecordFetch;
@property (nonatomic, readonly) bool isAsset;
@property (nonatomic, readonly) bool isTrashedOrDeletedAsset;
@property (nonatomic, readonly) CPLBeforeUploadCheckItems *items;
@property (nonatomic, readonly) bool needsToGenerateDerivatives;
@property (nonatomic, readonly) unsigned long long pushRepositoryPriority;
@property (nonatomic, readonly) long long ruleGroups;
@property (nonatomic, readonly) CPLScopedIdentifier *scopedIdentifier;
@property (nonatomic, readonly) CPLRecordTarget *target;

- (void).cxx_destruct;
- (bool)_addRelatedRecordWithScopedIdentifierToAdditionalRecords:(id)arg1 provider:(id)arg2 error:(id*)arg3;
- (void)_bumpPushRepositoryPriority:(unsigned long long)arg1 reason:(id)arg2;
- (bool)_forAdditionalRecordRule:(id)arg1 check:(int (*)arg2 error:(id*)arg3;
- (bool)_forRule:(id)arg1 check:(int (*)arg2 error:(id*)arg3;
- (bool)_serverResourcesMatches:(id)arg1;
- (id)change;
- (Class)changeClass;
- (bool)checkBeforeUploadWithError:(id*)arg1;
- (id)description;
- (void)dropChangeWithReason:(id)arg1;
- (bool)dropGeneratingDerivativesIfPossibleWithRecordOnServer:(id)arg1 error:(id*)arg2;
- (void)dropResourceChangeWithReason:(id)arg1;
- (void)dropSharingChangeWithReason:(id)arg1;
- (unsigned long long)estimatedResourceUploadSize;
- (bool)hasRequestedRecordFetch;
- (id)initWithChange:(id)arg1 checkItems:(id)arg2;
- (bool)isAsset;
- (bool)isTrashedOrDeletedAsset;
- (id)items;
- (bool)needsToGenerateDerivatives;
- (bool)prepareWithError:(id*)arg1;
- (unsigned long long)pushRepositoryPriority;
- (id)redactedDescription;
- (void)reinjectChangeWithReason:(id)arg1;
- (bool)rejectChangeWithReason:(id)arg1 error:(id*)arg2;
- (bool)requestFetchForRule:(id)arg1 error:(id*)arg2;
- (bool)requestFetchOfRecordWithScopedIdentifier:(id)arg1 forRule:(id)arg2 error:(id*)arg3;
- (long long)ruleGroups;
- (id)scopedIdentifier;
- (id)target;
- (void)updatePushRepositoryPriorityWithRecordOnServer:(id)arg1;

@end
