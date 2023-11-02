
@interface CloudKit.PackageReference : NSObject {
    void databaseScope;
    void fieldName;
    void recordID;
}

@property (nonatomic, readonly) long long databaseScope;
@property (nonatomic, readonly) NSString *fieldName;
@property (nonatomic, readonly) CKRecordID *recordID;

- (void).cxx_destruct;
- (long long)databaseScope;
- (id)fieldName;
- (id)init;
- (id)initWith:(id)arg1 error:(id*)arg2;
- (id)initWithRecordID:(id)arg1 databaseScope:(long long)arg2 fieldName:(id)arg3;
- (id)recordID;
- (id)serializedDataAndReturnError:(id*)arg1;

@end
