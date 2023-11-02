
@interface CMIExternalMemoryDescriptor : NSObject {
    int  _allocatorType;
    unsigned long long  _memSize;
}

@property (nonatomic) int allocatorType;
@property (nonatomic) unsigned long long memSize;

- (int)allocatorType;
- (id)initWithMemSize:(unsigned long long)arg1 allocatorType:(int)arg2;
- (unsigned long long)memSize;
- (void)setAllocatorType:(int)arg1;
- (void)setMemSize:(unsigned long long)arg1;

@end
