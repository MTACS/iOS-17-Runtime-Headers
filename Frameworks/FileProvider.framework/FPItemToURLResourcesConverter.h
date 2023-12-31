
@interface FPItemToURLResourcesConverter : NSObject {
    NSMutableDictionary * _gettersByURLKey;
    NSMutableDictionary * _typesByURLKey;
}

+ (id)dictionaryFromItem:(id)arg1 requestedKeys:(id)arg2;

- (void).cxx_destruct;
- (void)_addHelperMethodsToClass:(Class)arg1;
- (void)_addMethod:(SEL)arg1 toClass:(Class)arg2;
- (void)_cacheImplementedPropertiesForClass:(Class)arg1;
- (id)_dictionaryFromItem:(id)arg1 requestedKeys:(id)arg2;
- (id)initWithItemClass:(Class)arg1;

@end
