
@interface QLMemoryLimitedQueueTask : NSObject {
    id /* block */  _block;
    unsigned long long  _expectedMemoryConsumption;
}

@property (readonly) id /* block */ block;
@property (readonly) unsigned long long expectedMemoryConsumption;

- (void).cxx_destruct;
- (id /* block */)block;
- (unsigned long long)expectedMemoryConsumption;
- (id)initWithBlock:(id /* block */)arg1 expectedMemoryConsumption:(unsigned long long)arg2;

@end
