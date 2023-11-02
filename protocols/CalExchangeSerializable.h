
@protocol CalExchangeSerializable <NSObject>

@required

+ (NSDictionary *)dictionaryWithExternalRepresentationData:(NSData *)arg1;
+ (NSData *)externalRepresentationDataWithDictionary:(NSDictionary *)arg1;

@end
