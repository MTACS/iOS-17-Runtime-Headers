
@interface _UITextAttributeDictionary : NSDictionary

@property (nonatomic, readonly) <_UITextAttributeDefaults> *fallback;

+ (id)alloc;
+ (id)new;

- (bool)ignoresFallbackForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1 fallback:(id)arg2;
- (id)sparseDictionary;
- (bool)usesFallbackForKey:(id)arg1;

@end
