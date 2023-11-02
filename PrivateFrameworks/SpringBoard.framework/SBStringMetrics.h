
@interface SBStringMetrics : NSObject <NSFastEnumeration> {
    NSMutableArray * _fragments;
}

- (void).cxx_destruct;
- (void)addFragment:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (unsigned long long)fragmentCount;
- (id)fragments;
- (id)init;

@end
