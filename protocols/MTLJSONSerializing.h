
@protocol MTLJSONSerializing <MTLModel>

@required

+ (NSDictionary *)JSONKeyPathsByPropertyKey;

@optional

+ (NSValueTransformer *)JSONTransformerForKey:(NSString *)arg1;
+ (Class)classForParsingJSONDictionary:(NSDictionary *)arg1;

@end
