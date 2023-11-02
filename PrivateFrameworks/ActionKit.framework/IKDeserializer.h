
@interface IKDeserializer : NSObject

+ (id)_URLForKey:(id)arg1 inDictionary:(id)arg2;
+ (id)_dateForKey:(id)arg1 inDictionary:(id)arg2;
+ (id)_normalizedObjectForKey:(id)arg1 inDictionary:(id)arg2;
+ (id)objectFromJSONString:(id)arg1;
+ (bool)token:(id*)arg1 andTokenSecret:(id*)arg2 fromQlineString:(id)arg3;

@end
