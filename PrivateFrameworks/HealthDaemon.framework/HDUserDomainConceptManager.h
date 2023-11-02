
@interface HDUserDomainConceptManager : NSObject {
    NSMutableArray * _pendingUserDomainConceptObserverRecords;
    HDUserDomainConceptProcessingManager * _processingManager;
    HDProfile * _profile;
    HDUserDomainConceptSyncRequester * _syncRequester;
    NSMutableArray * _transactionUserDomainConceptObserverRecords;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _userDomainConceptObserverLock;
    long long  _userDomainConceptObserverOpenTransactionsCount;
    HKObserverSet<HDUserDomainConceptObserver> * _userDomainConceptObservers;
}

@property (nonatomic, readonly) HDUserDomainConceptProcessingManager *processingManager;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) HDUserDomainConceptSyncRequester *syncRequester;

+ (id)countOfUserDomainConceptsMatchingPredicate:(id)arg1 options:(unsigned long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)predicateForAllPinnedConceptsMappingToRecordsWithUUIDs:(id)arg1 pinnedConceptUUIDs:(id)arg2;
+ (id)predicateForElementsOfListType:(unsigned long long)arg1;
+ (id)predicateForListUserDomainConceptWithType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addUserDomainConceptObserver:(id)arg1 queue:(id)arg2;
- (void)closeObserverTransaction;
- (bool)deleteUserDomainConcept:(id)arg1 error:(id*)arg2;
- (bool)deleteUserDomainConcepts:(id)arg1 error:(id*)arg2;
- (bool)enumerateUserDomainConceptsWithPredicate:(id)arg1 enumerationOptions:(unsigned long long)arg2 limit:(long long)arg3 orderingTerms:(id)arg4 error:(id*)arg5 enumerationHandler:(id /* block */)arg6;
- (bool)enumerateUserDomainConceptsWithPredicate:(id)arg1 enumerationOptions:(unsigned long long)arg2 limit:(long long)arg3 orderingTerms:(id)arg4 transaction:(id)arg5 error:(id*)arg6 enumerationHandler:(id /* block */)arg7;
- (bool)enumerateUserDomainConceptsWithPredicate:(id)arg1 error:(id*)arg2 enumerationHandler:(id /* block */)arg3;
- (bool)enumerateUserDomainConceptsWithPredicate:(id)arg1 limit:(long long)arg2 orderingTerms:(id)arg3 error:(id*)arg4 enumerationHandler:(id /* block */)arg5;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (id)keyValueDomain;
- (bool)modifyUserDomainConcepts:(id)arg1 method:(long long)arg2 error:(id*)arg3;
- (bool)modifyUserDomainConcepts:(id)arg1 method:(long long)arg2 syncProvenance:(long long)arg3 syncIdentity:(long long)arg4 syncVersion:(struct { int x1; int x2; })arg5 error:(id*)arg6;
- (void)notifyObserversForAddedUDC:(id)arg1 transaction:(id)arg2;
- (void)notifyObserversForDeletedUDC:(id)arg1 transaction:(id)arg2;
- (void)notifyObserversForUpdatedUDC:(id)arg1 transaction:(id)arg2;
- (void)openObserverTransaction;
- (id)orderingTermsForSortDescriptors:(id)arg1 error:(id*)arg2;
- (id)processingManager;
- (id)profile;
- (void)removeUserDomainConceptObserver:(id)arg1;
- (id)syncRequester;
- (bool)updateUserDomainConcept:(id)arg1 error:(id*)arg2;
- (bool)updateUserDomainConcepts:(id)arg1 error:(id*)arg2;
- (id)userDomainConceptAnalyticsWithError:(id*)arg1;

@end
