
@interface BBMuteExpirationManager : NSObject {
    <BBMuteExpirationManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _timersBySectionID;
}

@property (nonatomic) <BBMuteExpirationManagerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *timersBySectionID;

- (void).cxx_destruct;
- (void)_cancelTimerForSectionID:(id)arg1;
- (void)_queue_triggerDidFireForExpiryTimer:(id)arg1;
- (bool)cleanAndWatchExpirationsForSectionInfo:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithQueue:(id)arg1;
- (id)queue;
- (id)scheduledExpirationDateForSectionID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimersBySectionID:(id)arg1;
- (void)stopWatchingExpirationsForSectionID:(id)arg1;
- (id)timersBySectionID;

@end
