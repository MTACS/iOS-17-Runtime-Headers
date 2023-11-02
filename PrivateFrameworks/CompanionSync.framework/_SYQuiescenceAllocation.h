
@interface _SYQuiescenceAllocation : NSObject {
    id  _object;
    void * _returnAddress;
}

@property (nonatomic) id object;
@property (nonatomic) void*returnAddress;

- (void).cxx_destruct;
- (id)object;
- (void*)returnAddress;
- (void)setObject:(id)arg1;
- (void)setReturnAddress:(void*)arg1;

@end
