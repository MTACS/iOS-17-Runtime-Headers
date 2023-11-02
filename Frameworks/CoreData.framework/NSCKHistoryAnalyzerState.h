
@interface NSCKHistoryAnalyzerState : NSManagedObject <PFHistoryAnalyzerObjectState>

@property (nonatomic, readonly) NSManagedObjectID *analyzedObjectID;
@property (nonatomic, retain) NSNumber *entityId;
@property (nonatomic, retain) NSNumber *entityPK;
@property (nonatomic, readonly) NSString *finalChangeAuthor;
@property (nonatomic, readonly) long long finalChangeType;
@property (nonatomic, retain) NSNumber *finalChangeTypeNum;
@property (nonatomic, readonly) NSNumber *finalTransactionNumber;
@property (nonatomic, readonly) long long originalChangeType;
@property (nonatomic, retain) NSNumber *originalChangeTypeNum;
@property (nonatomic, readonly) NSNumber *originalTransactionNumber;
@property (nonatomic, readonly) NSDictionary *tombstone;

+ (id)entityPath;

- (id)analyzedObjectID;
- (long long)finalChangeType;
- (void)mergeWithState:(id)arg1;
- (long long)originalChangeType;
- (id)tombstone;
- (void)updateWithChange:(id)arg1;

@end
