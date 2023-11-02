
@interface RBInheritanceCollection : NSObject <NSCopying, NSFastEnumeration, NSMutableCopying> {
    NSSet * _inheritances;
    NSDictionary * _inheritancesByEnvironment;
    NSSet * _namespaces;
}

+ (id)collectionWithInheritances:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithCollection:(id)arg1;
- (id)_initWithInheritances:(id)arg1;
- (id)allEnvironments;
- (id)allInheritances;
- (id)allNamespaces;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)inheritancesForEnvironment:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
