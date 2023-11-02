
@interface __NSGenericDeallocHandler  {
    id /* block */  _block;
    Class  isa;
}

+ (void)initialize;

- (void)finalize;
- (void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
