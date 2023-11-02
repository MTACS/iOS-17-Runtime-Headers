
@interface IDSCurrentServerTime : NSObject {
    CUTDeferredTaskQueue * _refreshServerTimeTask;
    <IDSCurrentServerTimeProvider> * _serverTimeProvider;
    IDSCurrentServerTimePair * _timePair;
}

@property (nonatomic, readonly) CUTDeferredTaskQueue *refreshServerTimeTask;
@property (nonatomic, retain) <IDSCurrentServerTimeProvider> *serverTimeProvider;
@property (retain) IDSCurrentServerTimePair *timePair;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_refreshServerTime;
- (double)_refreshTimeInterval;
- (void)_storeCurrentTime;
- (void)_storeInitialServerTimeIfNeeded;
- (id)currentServerTimeDate;
- (double)currentServerTimeInterval;
- (id)initWithServerTimeProvider:(id)arg1;
- (id)refreshServerTimeTask;
- (id)serverTimeProvider;
- (void)setServerTimeProvider:(id)arg1;
- (void)setTimePair:(id)arg1;
- (id)timePair;

@end
