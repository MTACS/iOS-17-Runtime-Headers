
@interface IMNicknameEncryptionCipherRecordField : NSObject {
    NSData * _IV;
    NSData * _cipherData;
    NSString * _fieldName;
    IMNicknameEncryptionFieldTag * _fieldTag;
}

@property (nonatomic, retain) NSData *IV;
@property (nonatomic, retain) NSData *cipherData;
@property (nonatomic, retain) NSString *fieldName;
@property (nonatomic, retain) IMNicknameEncryptionFieldTag *fieldTag;

+ (id)cipherRecordFieldWithFieldName:(id)arg1 dataRepresentation:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)IV;
- (id)cipherData;
- (id)dataRepresentationWithError:(id*)arg1;
- (id)description;
- (id)fieldName;
- (id)fieldTag;
- (id)initWithFieldName:(id)arg1 cipherData:(id)arg2 IV:(id)arg3 tag:(id)arg4;
- (void)setCipherData:(id)arg1;
- (void)setFieldName:(id)arg1;
- (void)setFieldTag:(id)arg1;
- (void)setIV:(id)arg1;

@end
