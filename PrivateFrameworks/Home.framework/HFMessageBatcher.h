
@interface HFMessageBatcher : NSObject {
    double  _batchingInterval;
    id /* block */  _block;
    <NACancelable> * _cancelable;
    NSString * _identifier;
    NSMutableSet * _mutableObjects;
    unsigned long long  signpostID;
}

@property (nonatomic, readonly) double batchingInterval;
@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, retain) <NACancelable> *cancelable;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSMutableSet *mutableObjects;
@property (nonatomic, readonly) NSSet *objects;

- (void).cxx_destruct;
- (void)batchObject:(id)arg1;
- (double)batchingInterval;
- (id /* block */)block;
- (id)cancelable;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 batchingInterval:(double)arg2 block:(id /* block */)arg3;
- (id)mutableObjects;
- (id)objects;
- (void)reset;
- (void)setBlock:(id /* block */)arg1;
- (void)setCancelable:(id)arg1;
- (void)setMutableObjects:(id)arg1;

@end
