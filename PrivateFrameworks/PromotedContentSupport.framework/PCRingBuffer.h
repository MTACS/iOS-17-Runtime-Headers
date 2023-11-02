
@interface PCRingBuffer : NSObject {
    APUnfairLock * _lock;
    NSMutableArray * _ringBuffer;
}

@property (nonatomic, readonly) APUnfairLock *lock;
@property (nonatomic, retain) NSMutableArray *ringBuffer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cappedRingBufferTo:(unsigned long long)arg1;
- (id)init;
- (id)lock;
- (id)ringBuffer;
- (void)setRingBuffer:(id)arg1;

@end
