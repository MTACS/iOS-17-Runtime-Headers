
@protocol CKVDatabaseReadWriteAccess <CKVDatabaseReadOnlyAccess>

@required

- (bool)executeCommand:(CKVDatabaseCommand *)arg1 error:(id*)arg2;
- (bool)executeCommand:(CKVDatabaseCommand *)arg1 error:(id*)arg2 returningRow:(id*)arg3;

@end
