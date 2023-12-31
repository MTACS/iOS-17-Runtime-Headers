
@protocol SiriCoreSQLiteValue <NSObject, NSCopying>

@required

- (NSString *)siriCoreSQLiteValue_escapedString:(bool)arg1;
- (NSData *)siriCoreSQLiteValue_toData;
- (NSNumber *)siriCoreSQLiteValue_toNumber;
- (NSString *)siriCoreSQLiteValue_toString;
- (long long)siriCoreSQLiteValue_type;

@optional

- (const void*)siriCoreSQLiteValue_blobRepresentationWithLength:(unsigned long long*)arg1;
- (double)siriCoreSQLiteValue_doubleRepresentation;
- (long long)siriCoreSQLiteValue_integerRepresentation;
- (const char *)siriCoreSQLiteValue_textRepresentation;

@end
