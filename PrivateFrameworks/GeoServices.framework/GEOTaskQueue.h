
@interface GEOTaskQueue : NSObject {
    NSMutableSet * _inFlight;
    geo_isolater * _isolation;
    NSMutableArray * _pending;
    unsigned long long  _width;
}

@property (nonatomic) unsigned long long width;

- (void).cxx_destruct;
- (void)addTask:(id)arg1;
- (id)init;
- (bool)removeTaskIfPending:(id)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (void)taskFinished:(id)arg1;
- (unsigned long long)width;

@end
