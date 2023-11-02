
@interface SearchUIScreenTimeRequestStatusManager : NSObject {
    BPSSink * _biomeSink;
    NSNotificationCenter * _notificationCenter;
    NSMutableDictionary * _requestStatuses;
}

@property (nonatomic, retain) BPSSink *biomeSink;
@property (nonatomic, retain) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) NSMutableDictionary *requestStatuses;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)addObserver:(id /* block */)arg1;
- (id)biomeSink;
- (void)dealloc;
- (id)init;
- (id)notificationCenter;
- (void)removeObserver:(id)arg1;
- (id)requestStatuses;
- (void)setBiomeSink:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setupSink;
- (int)statusForRequestID:(id)arg1;
- (void)updateWithEvent:(id)arg1;

@end
