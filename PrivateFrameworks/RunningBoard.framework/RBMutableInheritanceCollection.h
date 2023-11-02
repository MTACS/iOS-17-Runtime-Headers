
@interface RBMutableInheritanceCollection : RBInheritanceCollection {
    NSCountedSet * _countedNamespaces;
}

+ (id)collectionWithInheritances:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithCollection:(id)arg1;
- (void)addInheritance:(id)arg1;
- (id)allNamespaces;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeInheritance:(id)arg1;
- (void)unionCollection:(id)arg1;

@end
