
@interface HMCollectionSetting : HMSetting <NSFastEnumeration> {
    NSSet * _itemValueClasses;
}

@property (readonly, copy) NSSet *itemValueClasses;

+ (id)defaultItemValueClasses;
+ (id)itemValueClassesForKeyPath:(id)arg1;
+ (void)setItemValueClass:(Class)arg1 forKeyPath:(id)arg2;
+ (void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (bool)isKindOfClass:(Class)arg1;
- (id)itemValueClasses;
- (void)setItemValueClass:(Class)arg1;
- (void)setItemValueClasses:(id)arg1;

@end
