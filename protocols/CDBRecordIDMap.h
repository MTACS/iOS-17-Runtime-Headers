
@protocol CDBRecordIDMap <NSObject>

@required

- (struct CalRecordID { }*)recordIDForExternalIdentifier:(NSString *)arg1;
- (struct CalRecordID { }*)recordIDForUniqueIdentifier:(NSString *)arg1;
- (void)setExternalIdentifier:(NSString *)arg1 forRecordID:(struct CalRecordID { }*)arg2;
- (void)setUniqueIdentifier:(NSString *)arg1 forRecordID:(struct CalRecordID { }*)arg2;

@end
