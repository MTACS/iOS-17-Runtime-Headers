
@protocol CNVCardSerializationStorage <NSObject>

@required

- (void)appendData:(NSData *)arg1;
- (void)appendFormat:(NSString *)arg1;
- (void)appendString:(NSString *)arg1;
- (void)appendString:(NSString *)arg1 usingEncoding:(unsigned long long)arg2;
- (unsigned long long)currentLength;
- (unsigned long long)estimatedDataLength;
- (void)insertString:(NSString *)arg1 atMarker:(id)arg2;
- (id)insertionMarker;

@end
