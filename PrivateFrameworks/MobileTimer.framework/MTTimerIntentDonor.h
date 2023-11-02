
@interface MTTimerIntentDonor : NSObject <MTTimerObserver> {
    NSMutableSet * _donatedTimerIDs;
    <NAScheduler> * _serializer;
    MTTimerStorage * _storage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableSet *donatedTimerIDs;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, readonly) MTTimerStorage *storage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_donateCreateTimerIntent:(id)arg1 source:(id)arg2;
- (id)donatedTimerIDs;
- (id)initWithStorage:(id)arg1;
- (void)nextTimerDidChange:(id)arg1;
- (id)serializer;
- (void)setSerializer:(id)arg1;
- (void)source:(id)arg1 didAddTimers:(id)arg2;
- (void)source:(id)arg1 didDismissTimer:(id)arg2;
- (void)source:(id)arg1 didFireTimer:(id)arg2;
- (void)source:(id)arg1 didRemoveTimers:(id)arg2;
- (void)source:(id)arg1 didUpdateTimers:(id)arg2;
- (id)storage;

@end
