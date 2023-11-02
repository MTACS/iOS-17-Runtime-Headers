
@interface GCObservation : NSObject {
    void * _context;
    id  _observer;
    unsigned long long  _options;
}

@property (nonatomic) void*context;
@property (nonatomic) id observer;
@property (nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (void*)context;
- (id)description;
- (unsigned long long)hash;
- (id)initWithObserver:(id)arg1 options:(unsigned long long)arg2 context:(void*)arg3;
- (bool)isEqual:(id)arg1;
- (id)observer;
- (unsigned long long)options;
- (void)setContext:(void*)arg1;
- (void)setObserver:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end
