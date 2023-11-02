
@interface VCPLoaned : NSObject {
    id  _object;
    VCPObjectPool * _pool;
}

@property (nonatomic, readonly) id object;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithObject:(id)arg1 fromPool:(id)arg2;
- (id)object;

@end
