
@protocol SCKZoneModifying

@required

- (void)createOrUpdateRecordWithName:(void *)arg1 recordType:(void *)arg2 modifyBlock:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKRecord *, void*
- (void)deleteRecordWithName:(NSString *)arg1;
- (bool)recordExistsWithName:(NSString *)arg1;

@end
