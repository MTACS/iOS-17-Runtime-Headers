
@interface PFUbiquityTransactionEntry : NSManagedObject

@property (nonatomic, retain) PFUbiquityPeer *actingPeer;
@property (nonatomic, retain) NSString *globalIDStr;
@property (nonatomic, retain) NSString *knowledgeVectorString;
@property (nonatomic, retain) NSString *localIDStr;
@property (nonatomic, retain) PFUbiquityStoreMetadata *storeMetadata;
@property (nonatomic, retain) NSDate *transactionDate;
@property (nonatomic, retain) NSString *transactionLogFilename;
@property (nonatomic, retain) NSNumber *transactionNumber;
@property (nonatomic, retain) NSNumber *transactionTypeNum;

- (id)initAndInsertIntoManagedObjectContext:(id)arg1;

@end
