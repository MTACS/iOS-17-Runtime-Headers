
@interface SUScriptDictionary : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _cachedNestedScriptDictionaries;
    NSDictionary * _dictionary;
    NSArray * _stringKeys;
}

@property (readonly) NSDictionary *dictionary;

+ (void)initialize;
+ (bool)isKeyExcludedFromWebScript:(const char *)arg1;
+ (bool)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void).cxx_destruct;
- (id)attributeKeys;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)stringRepresentation;
- (id)valueForKey:(id)arg1;
- (id)valueForNotNativelySupportedKey:(id)arg1;

@end
