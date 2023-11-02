
@interface HKCorrelation : HKSample <HDCoding, WFNaming> {
    NSMutableDictionary * _objects;
}

@property (getter=_UUID, readonly) NSUUID *UUID;
@property (readonly) HKCorrelationType *correlationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSSet *objects;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *wfName;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_allowEmptyCorrelations;
+ (bool)_isConcreteObjectClass;
+ (id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4;
+ (id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 device:(id)arg5 metadata:(id)arg6;
+ (id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 metadata:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_UUID;
- (void)_addCorrelatedObject:(id)arg1;
- (void)_addCorrelatedObjects:(id)arg1;
- (id)_allTypes;
- (bool)_containsObjects;
- (bool)_correlatedObjectsMatchFilterDictionary:(id)arg1;
- (void)_filterCorrelatedObjectsWithFilterDictionary:(id)arg1;
- (id)_init;
- (void)_removeAllCorrelatedObjects;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)correlationType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objects;
- (id)objectsForType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

- (id)wfName;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;
- (id)hd_associatedObjects;
- (id)hd_associatedSampleTypes;
- (bool)hd_insertRelatedDataWithPersistentID:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
- (id)hd_relatedJournalEntriesWithProfile:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox

- (void)deleteObjectWithHealthStore:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)quantitySampleForType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (void)_hk_bloodPressureDetailRowForSampleType:(id)arg1 title:(id)arg2 section:(id)arg3;
- (void)_hk_bloodPressureDetailRowsWithSection:(id)arg1;
- (void)addDetailValuesToSection:(id)arg1;
- (id)dataProviderValue;

@end
