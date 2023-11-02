
@interface AMSCircularBuffer : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableArray * _buffer;
    unsigned long long  _currentIndex;
    unsigned long long  _maxSize;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly, copy) NSArray *allObjects;
@property (nonatomic, retain) NSMutableArray *buffer;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic) unsigned long long maxSize;

+ (id)_rearrangeObjects:(id)arg1 forCurrentIndex:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_flush;
- (id)accessQueue;
- (void)addObject:(id)arg1;
- (id)allObjects;
- (id)buffer;
- (unsigned long long)count;
- (unsigned long long)currentIndex;
- (id)description;
- (id)flush;
- (id)init;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (unsigned long long)maxSize;
- (void)setAccessQueue:(id)arg1;
- (void)setBuffer:(id)arg1;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (void)setMaxSize:(unsigned long long)arg1;

@end