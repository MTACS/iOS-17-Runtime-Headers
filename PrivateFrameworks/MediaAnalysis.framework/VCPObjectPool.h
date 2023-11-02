
@interface VCPObjectPool : NSObject {
    id /* block */  _allocator;
    NSMutableArray * _objects;
}

+ (id)objectPoolWithAllocator:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)getObject;
- (id)initWithAllocator:(id /* block */)arg1;
- (void)returnObject:(id)arg1;

@end
