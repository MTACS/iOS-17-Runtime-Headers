
@interface IMNicknameEncryptionPreKey : NSObject {
    NSData * _derivedData;
    NSData * _generatedData;
}

@property (nonatomic, retain) NSData *derivedData;
@property (nonatomic, readonly) IMNicknameFieldEncryptionKey *fieldEncryptionKey;
@property (nonatomic, readonly) IMNicknameFieldTaggingKey *fieldTaggingKey;
@property (nonatomic, retain) NSData *generatedData;
@property (nonatomic, readonly) IMNicknameRecordTaggingKey *recordTaggingKey;

+ (id)generatePreKeyWithError:(id*)arg1;
+ (id)preKeyWithDataRepresentation:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_subDerivedKeyDataAtIndex:(unsigned long long)arg1;
- (id)dataRepresentation;
- (id)derivedData;
- (id)fieldEncryptionKey;
- (id)fieldTaggingKey;
- (id)generatedData;
- (id)initWithGeneratedData:(id)arg1 derivedData:(id)arg2;
- (id)recordTaggingKey;
- (void)setDerivedData:(id)arg1;
- (void)setGeneratedData:(id)arg1;

@end
