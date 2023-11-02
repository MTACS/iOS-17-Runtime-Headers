
@interface FCHCZoneContentsRecordTest : NSObject {
    NSArray * _encryptedFields;
    NSDictionary * _expectedValues;
    NSString * _recordType;
    NSArray * _unencryptedFields;
}

@property (nonatomic, copy) NSArray *encryptedFields;
@property (nonatomic, copy) NSDictionary *expectedValues;
@property (nonatomic, copy) NSString *recordType;
@property (nonatomic, copy) NSArray *unencryptedFields;

- (void).cxx_destruct;
- (id)encryptedFields;
- (id)expectedValues;
- (id)recordType;
- (void)setEncryptedFields:(id)arg1;
- (void)setExpectedValues:(id)arg1;
- (void)setRecordType:(id)arg1;
- (void)setUnencryptedFields:(id)arg1;
- (id)unencryptedFields;

@end
