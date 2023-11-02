
@interface _PFResultArray : NSArray {
    int  _cd_rc;
    unsigned int  _count;
    NSKnownKeysDictionary * _metadata;
    struct { unsigned int x1; double x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; struct { unsigned int x_8_1_1 : 1; unsigned int x_8_1_2 : 1; unsigned int x_8_1_3 : 1; unsigned int x_8_1_4 : 1; unsigned int x_8_1_5 : 1; unsigned int x_8_1_6 : 1; unsigned int x_8_1_7 : 1; unsigned int x_8_1_8 : 25; } x8; int x9; void **x10; unsigned int *x11; void *x12; void *x13; } * _resultSet;
    unsigned int  _resultType;
    _PFWeakReference * _weakRequestStore;
}

+ (bool)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;
+ (void)initialize;

- (bool)_setPurgeable:(bool)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithObjects:(struct { unsigned int x1; double x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; struct { unsigned int x_8_1_1 : 1; unsigned int x_8_1_2 : 1; unsigned int x_8_1_3 : 1; unsigned int x_8_1_4 : 1; unsigned int x_8_1_5 : 1; unsigned int x_8_1_6 : 1; unsigned int x_8_1_7 : 1; unsigned int x_8_1_8 : 25; } x8; int x9; void **x10; unsigned int *x11; void *x12; void *x13; }*)arg1 count:(unsigned int)arg2 store:(id)arg3 metadata:(id)arg4;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
