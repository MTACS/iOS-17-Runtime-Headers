
@interface HMDStructuredReader : HMDStructuredDataStream

@property (readonly) long long tokenType;

+ (id)extendedTypeReaderWithReader:(id)arg1;
+ (id)readerFromOPACKData:(id)arg1;
+ (id)readerFromObject:(id)arg1;
+ (id)readerFromObjectWithExtendedTypes:(id)arg1;

- (unsigned long long)beginArray;
- (unsigned long long)beginDictionary;
- (void)copyLogicalValueToWriter:(id)arg1;
- (void)endArray;
- (void)endDictionary;
- (bool)readBoolean;
- (id)readData;
- (id)readDate;
- (id)readDictionaryKey;
- (id)readLogicalValueAsObject;
- (void)readNull;
- (id)readNumber;
- (id)readString;
- (struct _HMDStructuredDataToken { long long x1; id x2; })readToken;
- (id)readUUID;
- (void)skipLogicalValue;
- (void)skipToken;
- (long long)tokenType;

@end
