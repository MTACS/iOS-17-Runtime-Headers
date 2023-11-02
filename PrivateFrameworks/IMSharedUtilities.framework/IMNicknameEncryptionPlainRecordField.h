
@interface IMNicknameEncryptionPlainRecordField : NSObject {
    NSString * _fieldName;
    NSData * _plainData;
}

@property (nonatomic, retain) NSString *fieldName;
@property (nonatomic, retain) NSData *plainData;

- (void).cxx_destruct;
- (id)description;
- (id)fieldName;
- (id)initWithFieldName:(id)arg1 plainData:(id)arg2;
- (id)plainData;
- (void)setFieldName:(id)arg1;
- (void)setPlainData:(id)arg1;

@end
