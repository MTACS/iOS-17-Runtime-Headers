
@interface SPProtoSerializer : NSObject

+ (id)arrayWithSPPlist:(id)arg1;
+ (id)dataWithObject:(id)arg1;
+ (id)dictionaryWithSPPlist:(id)arg1;
+ (id)numberWithSPProtoSockPuppetObject:(id)arg1;
+ (id)objectWithData:(id)arg1;
+ (id)protoSPObjectWithArray:(id)arg1 forKey:(id)arg2;
+ (id)protoSPObjectWithData:(id)arg1 forKey:(id)arg2;
+ (id)protoSPObjectWithDictionary:(id)arg1 forKey:(id)arg2;
+ (id)protoSPObjectWithNumber:(id)arg1 forKey:(id)arg2;
+ (id)protoSPObjectWithObject:(id)arg1 forKey:(id)arg2;
+ (id)protoSPObjectWithString:(id)arg1 forKey:(id)arg2;
+ (id)spPlistWithArray:(id)arg1;
+ (id)spPlistWithDictionary:(id)arg1;

@end
