
@interface IKArray : NSObject <NSCopying, NSFastEnumeration, NSMutableCopying> {
    NSMutableArray * _arrayStore;
    id  _obj0;
    id  _obj1;
}

@property (nonatomic, retain) NSMutableArray *arrayStore;
@property (nonatomic, retain) id obj0;
@property (nonatomic, retain) id obj1;

+ (id)array;

- (void).cxx_destruct;
- (void)_setupWithNSArray:(id)arg1;
- (id)arrayStore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)firstObject;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)initWithNSArray:(id)arg1;
- (id)lastObject;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)obj0;
- (id)obj1;
- (id)objectAtIndex:(long long)arg1;
- (id)objectAtIndexedSubscript:(long long)arg1;
- (id)objectEnumerator;
- (void)setArrayStore:(id)arg1;
- (void)setObj0:(id)arg1;
- (void)setObj1:(id)arg1;
- (id)toNSArray;

@end