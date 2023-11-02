
@protocol CKVDatabaseValue <NSObject>

@required

- (NSData *)databaseValue_toData;
- (NSNumber *)databaseValue_toNumber;
- (NSString *)databaseValue_toString;
- (long long)databaseValue_type;

@optional

- (const void*)databaseValue_blobRepresentationWithLength:(unsigned long long*)arg1;
- (double)databaseValue_doubleRepresentation;
- (long long)databaseValue_integerRepresentation;
- (const char *)databaseValue_textRepresentation;

@end
