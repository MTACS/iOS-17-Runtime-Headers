
@interface _UIMutableTextAttributeDictionary : NSMutableDictionary

@property (nonatomic, retain) <_UITextAttributeDefaults> *fallback;

+ (id)alloc;
+ (id)new;

- (bool)ignoresFallbackForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1 fallback:(id)arg2;
- (id)initWithFallback:(id)arg1;
- (void)setIgnoresFallback:(bool)arg1 forKey:(id)arg2;
- (id)sparseDictionary;
- (bool)usesFallbackForKey:(id)arg1;

@end
