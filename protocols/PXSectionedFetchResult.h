
@protocol PXSectionedFetchResult <NSObject>

@required

- (bool)containsObject:(id <NSObject><NSCopying>)arg1;
- (long long)count;
- (<NSObject><NSCopying> *)firstObject;
- (<NSObject><NSCopying> *)lastObject;
- (<NSObject><NSCopying> *)objectAtIndex:(unsigned long long)arg1;
- (NSArray *)objectsAtIndexes:(NSIndexSet *)arg1;

@optional

- (unsigned long long)indexOfObject:(id <NSObject><NSCopying>)arg1;
- (unsigned long long)indexOfObject:(id <NSObject><NSCopying>)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
