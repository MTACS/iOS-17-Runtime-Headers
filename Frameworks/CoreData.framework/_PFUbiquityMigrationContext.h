
@interface _PFUbiquityMigrationContext : NSObject {
    PFUbiquityStoreSaveSnapshot * _destinationStoreSaveSnapshot;
    PFUbiquityStoreSaveSnapshot * _sourceStoreSaveSnapshot;
    PFUbiquityTransactionLog * _transactionLog;
}

- (void)dealloc;

@end
