
@interface BWStreamStartStopSynchronizer : NSObject {
    bool  _masterStartedGroupEntered;
    NSDictionary * _streamStatesByPortType;
    NSArray * _synchronizationSlavesOrderedByPriority;
    float  _timeoutInSeconds;
}

@property (nonatomic, retain) NSArray *synchronizationSlavesOrderedByPriority;
@property (nonatomic) bool waitForMasterAEToSettle;

+ (void)initialize;

- (void)dealloc;
- (id)initWithStreams:(id)arg1 timeoutInSeconds:(float)arg2;
- (void)setSynchronizationSlavesOrderedByPriority:(id)arg1;
- (void)setWaitForMasterAEToSettle:(bool)arg1;
- (void)streamDidStart:(id)arg1;
- (void)streamDidStop:(id)arg1;
- (bool)streamWillStart:(id)arg1;
- (bool)streamWillStop:(id)arg1;
- (id)synchronizationSlavesOrderedByPriority;
- (bool)waitForMasterAEToSettle;

@end
