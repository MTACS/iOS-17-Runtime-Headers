
@interface MSVMultiCallback : NSObject {
    NSMutableArray * _callbacks;
    MSVCallback * _firstCallback;
    MSVCallback * _lastCallback;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) NSArray *callbacks;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) MSVCallback *firstCallback;
@property (nonatomic, retain) MSVCallback *lastCallback;

- (void).cxx_destruct;
- (void)addCallback:(id)arg1;
- (id)callbacks;
- (unsigned long long)count;
- (id)firstCallback;
- (id)init;
- (void)invoke;
- (void)invokeWithObject:(id)arg1;
- (id)lastCallback;
- (bool)removeCallback:(id)arg1;
- (void)setFirstCallback:(id)arg1;
- (void)setLastCallback:(id)arg1;

@end
