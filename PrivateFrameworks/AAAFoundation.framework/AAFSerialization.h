
@interface AAFSerialization : NSObject {
    NSDictionary * _serializersByType;
}

+ (id)dataFromDictionary:(id)arg1 ofType:(id)arg2;
+ (id)dictionaryFromObject:(id)arg1 ofType:(id)arg2;
+ (id)instance;
+ (id)ofType:(id)arg1;
+ (id)stringFromDictionary:(id)arg1 ofType:(id)arg2;

- (void).cxx_destruct;
- (void)addSerializer:(id)arg1;
- (id)init;
- (id)serializerOfType:(id)arg1;

@end
