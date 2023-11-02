
@interface HKListUserDomainConcept : HKUserDomainConcept <NSSecureCoding> {
    NSString * _listName;
    unsigned long long  _listType;
}

@property (nonatomic, readonly, copy) NSString *listName;
@property (nonatomic, readonly) unsigned long long listType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_typeIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_currentLinkCollection;
- (id)_dataDescription;
- (id)_deepCopy;
- (void)_setListName:(id)arg1;
- (void)_setListType:(unsigned long long)arg1;
- (bool)canRequestSyncUponInsertion;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodingCollection:(id)arg1 linkCollection:(id)arg2 propertyCollection:(id)arg3;
- (id)initWithListType:(unsigned long long)arg1;
- (id)initWithListType:(unsigned long long)arg1 listName:(id)arg2;
- (id)listByAddingUserDomainConcept:(id)arg1;
- (id)listByAddingUserDomainConcepts:(id)arg1;
- (id)listByExchangingConceptAtIndex:(unsigned long long)arg1 withIndex:(unsigned long long)arg2;
- (id)listByInsertingUserDomainConcept:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)listByMovingUserDomainConceptFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)listByRemovingAllUserDomainConcepts;
- (id)listByRemovingUserDomainConcept:(id)arg1;
- (id)listByRemovingUserDomainConceptAtIndex:(unsigned long long)arg1;
- (id)listByReplacingConceptAtIndex:(unsigned long long)arg1 withUserDomainConcept:(id)arg2;
- (id)listByUpdatingName:(id)arg1;
- (id)listName;
- (unsigned long long)listType;
- (id)semanticIdentifier;
- (bool)unitTesting_isIdentical:(id)arg1;
- (bool)unitTesting_isIdentical:(id)arg1 ignoreModificationTimestamp:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (void)applyCodableSubclassData:(id)arg1 mutableUserDomainConceptProperties:(id)arg2;
- (id)codableSubclassData;

@end
