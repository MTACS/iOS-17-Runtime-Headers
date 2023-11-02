
@interface BRContainerBundlePropertyEnumerator : NSEnumerator {
    NSEnumerator * _enumerator;
    NSDictionary * _plist;
    NSString * _propertyKey;
    Class  _valueClass;
}

- (void).cxx_destruct;
- (id)initWithContainerPlist:(id)arg1 propertyKey:(id)arg2 valuesOfClass:(Class)arg3;
- (id)nextObject;

@end
