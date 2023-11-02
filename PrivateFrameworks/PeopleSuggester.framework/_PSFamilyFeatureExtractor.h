
@interface _PSFamilyFeatureExtractor : NSObject {
    NSSet * _featureSet;
    _PASLazyResult * _reusableEventDictsState;
    _CDCloudFamilyDataCollectionTask * _task;
}

@property (nonatomic, readonly) NSSet *featureSet;
@property (nonatomic, readonly) _CDCloudFamilyDataCollectionTask *task;

- (void).cxx_destruct;
- (id)_featureInputForContact:(id)arg1;
- (id)featureInputForContact:(id)arg1;
- (id)featureInputsForContacts:(id)arg1;
- (id)featureSet;
- (id)init;
- (id)initWith:(id)arg1 featureSet:(id)arg2;
- (id)initWithActivity:(id)arg1;
- (id)task;

@end
