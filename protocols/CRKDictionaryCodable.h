
@protocol CRKDictionaryCodable <CRKDictionaryEncodable, CRKDictionaryDecodable>

@required

+ (id)instanceWithDictionary:(NSDictionary *)arg1;

- (NSDictionary *)dictionaryValue;

@end
