
@interface PFHistoryAnalyzerDefaultObjectState : NSObject <PFHistoryAnalyzerObjectState> {
    NSManagedObjectID * _analyzedObjectID;
    NSString * _finalChangeAuthor;
    long long  _finalChangeType;
    NSNumber * _finalTransactionNumber;
    long long  _originalChangeType;
    NSNumber * _originalTransactionNumber;
    NSDictionary * _tombstone;
}

@property (nonatomic, readonly) NSManagedObjectID *analyzedObjectID;
@property (nonatomic, readonly) NSString *finalChangeAuthor;
@property (nonatomic, readonly) long long finalChangeType;
@property (nonatomic, readonly) NSNumber *finalTransactionNumber;
@property (nonatomic, readonly) long long originalChangeType;
@property (nonatomic, readonly) NSNumber *originalTransactionNumber;
@property (nonatomic, readonly) NSDictionary *tombstone;

- (id)analyzedObjectID;
- (void)dealloc;
- (id)description;
- (id)finalChangeAuthor;
- (long long)finalChangeType;
- (id)finalTransactionNumber;
- (id)initWithOriginalChange:(id)arg1;
- (long long)originalChangeType;
- (id)originalTransactionNumber;
- (id)tombstone;
- (void)updateWithChange:(id)arg1;

@end
