
@interface CKPackageReference : NSObject {
    _TtC8CloudKit16PackageReference * _packageReference;
}

@property (nonatomic, retain) _TtC8CloudKit16PackageReference *packageReference;

- (void).cxx_destruct;
- (long long)databaseScope;
- (id)fieldName;
- (id)initWithRecordID:(id)arg1 databaseScope:(long long)arg2 fieldName:(id)arg3;
- (id)initWithSerializedData:(id)arg1 error:(id*)arg2;
- (id)packageReference;
- (id)recordID;
- (id)serializedDataAndError:(id*)arg1;
- (void)setPackageReference:(id)arg1;

@end
