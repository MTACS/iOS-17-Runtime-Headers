
@interface _LSLazyPropertyList : LSPropertyList <LSDetachable, NSCopying, NSSecureCoding>

+ (id)lazyPropertyListWithContext:(struct LSContext { id x1; }*)arg1 unit:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (id)_expensiveDictionaryRepresentation;
- (bool)_getPropertyList:(id*)arg1;
- (bool)_getValue:(id*)arg1 forPropertyListKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)detach;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)objectsForKeys:(id)arg1;
- (void)prewarm;
- (id)uncheckedObjectsForKeys:(id)arg1;

@end
