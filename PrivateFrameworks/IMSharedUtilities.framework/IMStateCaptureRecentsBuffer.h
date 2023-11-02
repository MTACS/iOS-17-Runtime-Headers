
@interface IMStateCaptureRecentsBuffer : NSObject {
    unsigned long long * _handles;
    unsigned long long  _maximumNumberOfTrackedObjects;
    unsigned long long  _nextInsertionIndex;
    NSString * _title;
    NSPointerArray * _trackedObjects;
}

@property (nonatomic) unsigned long long*handles;
@property (nonatomic, readonly) unsigned long long maximumNumberOfTrackedObjects;
@property (nonatomic) unsigned long long nextInsertionIndex;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, retain) NSPointerArray *trackedObjects;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long*)handles;
- (id)initWithTitle:(id)arg1 maximumNumberOfTrackedObjects:(unsigned long long)arg2 queue:(id)arg3;
- (unsigned long long)maximumNumberOfTrackedObjects;
- (unsigned long long)nextInsertionIndex;
- (void)promoteRecentObject:(id)arg1;
- (void)registerStateCaptureBlockWithQueue:(id)arg1;
- (void)setHandles:(unsigned long long*)arg1;
- (void)setNextInsertionIndex:(unsigned long long)arg1;
- (void)setTrackedObjects:(id)arg1;
- (id)title;
- (id)trackedObjects;

@end
