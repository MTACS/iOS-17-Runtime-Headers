
@protocol PFHistoryAnalyzerObjectState

@required

- (NSManagedObjectID *)analyzedObjectID;
- (NSString *)finalChangeAuthor;
- (long long)finalChangeType;
- (NSNumber *)finalTransactionNumber;
- (long long)originalChangeType;
- (NSNumber *)originalTransactionNumber;
- (NSDictionary *)tombstone;
- (void)updateWithChange:(NSPersistentHistoryChange *)arg1;

@end
