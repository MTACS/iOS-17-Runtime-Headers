
@protocol SCKZoneReading

@required

- (NSArray *)allRecords;
- (CKRecord *)recordOfType:(NSString *)arg1;
- (CKRecord *)recordOfType:(void *)arg1 passingTest:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, CKRecord *, void*
- (CKRecord *)recordWithName:(NSString *)arg1;
- (NSArray *)recordsOfType:(NSString *)arg1;

@end
