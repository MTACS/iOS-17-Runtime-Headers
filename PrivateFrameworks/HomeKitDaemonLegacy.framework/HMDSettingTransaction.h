
@interface HMDSettingTransaction : NSObject <HMDSettingTransaction> {
    bool  _initialCreation;
    NSMutableSet * _removeUUIDs;
    NSString * _transactionLabel;
    NSMutableSet * _updateModels;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool initialCreation;
@property (readonly) NSMutableSet *removeUUIDs;
@property (readonly) Class superclass;
@property (readonly) NSString *transactionLabel;
@property (readonly) NSMutableSet *updateModels;

- (void).cxx_destruct;
- (void)addModel:(id)arg1;
- (void)addModelToBeUpdated:(id)arg1;
- (void)addSettingModel:(id)arg1;
- (id)initForInitialCreationWithTransactionLabel:(id)arg1;
- (id)initWithTransactionLabel:(id)arg1;
- (bool)initialCreation;
- (void)removeModelWithIdentifier:(id)arg1;
- (id)removeUUIDs;
- (id)transactionLabel;
- (id)updateModels;

@end
