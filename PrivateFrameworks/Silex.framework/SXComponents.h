
@interface SXComponents : NSObject <NSCopying, NSFastEnumeration, NSMutableCopying> {
    NSMutableDictionary * _childComponentsByParentIdentifier;
    NSMutableArray * _components;
    NSMutableDictionary * _componentsByIdentifier;
}

@property (nonatomic, readonly) NSArray *allComponents;
@property (nonatomic, readonly) NSMutableDictionary *childComponentsByParentIdentifier;
@property (nonatomic, readonly) NSMutableArray *components;
@property (nonatomic, readonly) NSMutableDictionary *componentsByIdentifier;
@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)_removeComponent:(id)arg1;
- (void)addComponent:(id)arg1;
- (void)addComponentsFromArray:(id)arg1;
- (id)allComponents;
- (id)childComponentsByParentIdentifier;
- (id)componentAtIndex:(unsigned long long)arg1;
- (id)componentForIdentifier:(id)arg1;
- (id)components;
- (id)componentsByIdentifier;
- (id)componentsForContainerComponentWithIdentifier:(id)arg1;
- (id)componentsForContainerComponentWithPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)enumerateComponentsWithBlock:(id /* block */)arg1;
- (unsigned long long)indexOfComponent:(id)arg1;
- (id)init;
- (id)initWithArray:(id)arg1;
- (void)insertComponent:(id)arg1 afterComponent:(id)arg2;
- (void)insertComponent:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)removeAllComponents;
- (void)removeComponentAtIndex:(unsigned long long)arg1;
- (void)removeComponentWithIdentifier:(id)arg1;
- (void)replaceComponent:(id)arg1 withComponent:(id)arg2;
- (void)replaceComponentAtIndex:(unsigned long long)arg1 withComponent:(id)arg2;
- (void)setComponents:(id)arg1;

@end
