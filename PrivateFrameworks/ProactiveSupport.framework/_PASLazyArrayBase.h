
@interface _PASLazyArrayBase : NSArray <NSFastEnumeration>

- (id)arrayByAddingObject:(id)arg1;
- (id)arrayByAddingObjectsFromArray:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (bool)isEqualToArray:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)sortedArrayFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingComparator:(id /* block */)arg3;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
