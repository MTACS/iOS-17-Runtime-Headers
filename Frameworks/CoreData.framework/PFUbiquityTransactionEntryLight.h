
@interface PFUbiquityTransactionEntryLight : NSObject {
    NSString * _actingPeerID;
    PFUbiquityGlobalObjectID * _globalID;
    PFUbiquityKnowledgeVector * _kv;
    NSString * _storeName;
    NSDate * _transactionDate;
    PFUbiquityLocation * _transactionLogLocation;
    NSNumber * _transactionNumber;
    int  _transactionType;
}

@property (nonatomic, retain) NSDate *transactionDate;
@property (nonatomic, retain) NSNumber *transactionNumber;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithTransactionEntry:(id)arg1 ubiquityRootLocation:(id)arg2 andGlobalIDCache:(id)arg3;
- (void)setTransactionDate:(id)arg1;
- (void)setTransactionNumber:(id)arg1;
- (id)transactionDate;
- (id)transactionNumber;

@end
