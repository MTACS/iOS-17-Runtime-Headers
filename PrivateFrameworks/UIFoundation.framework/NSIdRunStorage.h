
@interface NSIdRunStorage : NSRunStorage

+ (void)initialize;

- (void)_allocData:(unsigned long long)arg1;
- (void)_reallocData:(unsigned long long)arg1;
- (void)dealloc;

@end
