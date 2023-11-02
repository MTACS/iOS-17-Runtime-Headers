
@interface _DYNSKVCMutableCollectionPropertyInfo : NSObject {
    Class  _class;
    NSMapTable * _propertyBindingsMap;
    NSMapTable * _selectorBindingsMap;
}

+ (void)initialize;
+ (id)mutableCollectionPropertyInfoForClass:(Class)arg1;

- (id)_stringWithCapitalizedFirstLetter:(id)arg1;
- (id)bindingForProperty:(id)arg1;
- (id)bindingForSelector:(SEL)arg1;
- (void)dealloc;
- (void)dy_synthesizeMutableArrayProperty:(id)arg1 withInstanceVariable:(id)arg2;
- (void)dy_synthesizeMutableSetProperty:(id)arg1 withInstanceVariable:(id)arg2;
- (id)initWithClass:(Class)arg1;

@end
