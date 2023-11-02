
@interface NTKPigmentEditOptionArray : NSObject <NSFastEnumeration> {
    NSMutableArray * _backing;
    unsigned long long  _equality;
}

@property (readonly) unsigned long long count;
@property (readonly) unsigned long long equality;

+ (id)array;
+ (id)arrayWithEquality:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addPigment:(id)arg1;
- (bool)containsPigment:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)enumeratePigmentsUsingBlock:(id /* block */)arg1;
- (void)enumeratePigmentsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)equality;
- (unsigned long long)indexOfPigment:(id)arg1;
- (id)init;
- (id)initWithEquality:(unsigned long long)arg1;
- (void)insertPigment:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)pigmentAtIndex:(unsigned long long)arg1;
- (id)pigmentForPigment:(id)arg1;
- (void)removePigment:(id)arg1;
- (void)removePigmentAtIndex:(unsigned long long)arg1;

@end
