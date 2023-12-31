
@interface _INVocabularyGenerationDiff : NSObject {
    NSString * _appBundleID;
    long long  _countOfVocabularyItemsAfterApplying;
    NSSet * _deletedSiriIDs;
    NSString * _intentSlotName;
    bool  _isFullReset;
    NSArray * _updatedVocabularyItems;
}

@property (nonatomic, copy) NSString *appBundleID;
@property (nonatomic) long long countOfVocabularyItemsAfterApplying;
@property (nonatomic, copy) NSSet *deletedSiriIDs;
@property (nonatomic, copy) NSString *intentSlotName;
@property (nonatomic) bool isFullReset;
@property (nonatomic, copy) NSArray *updatedVocabularyItems;

- (void).cxx_destruct;
- (id)appBundleID;
- (long long)countOfVocabularyItemsAfterApplying;
- (id)deletedSiriIDs;
- (id)description;
- (bool)hasChanges;
- (id)intentSlotName;
- (bool)isFullReset;
- (void)setAppBundleID:(id)arg1;
- (void)setCountOfVocabularyItemsAfterApplying:(long long)arg1;
- (void)setDeletedSiriIDs:(id)arg1;
- (void)setIntentSlotName:(id)arg1;
- (void)setIsFullReset:(bool)arg1;
- (void)setUpdatedVocabularyItems:(id)arg1;
- (id)updatedVocabularyItems;

@end
