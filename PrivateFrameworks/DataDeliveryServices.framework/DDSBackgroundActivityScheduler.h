
@interface DDSBackgroundActivityScheduler : NSObject {
    <DDSBackgroundActivitySchedulerDelegate> * _delegate;
    NSMutableDictionary * _schedulerByIdentifier;
}

@property (nonatomic, retain) <DDSBackgroundActivitySchedulerDelegate> *delegate;
@property (nonatomic, retain) NSMutableDictionary *schedulerByIdentifier;

- (void).cxx_destruct;
- (void)cancelActivityWithIdentifier:(id)arg1;
- (id)delegate;
- (id)init;
- (void)scheduleActivityWithIdentifier:(id)arg1 interval:(double)arg2 tolerance:(double)arg3;
- (id)schedulerByIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setSchedulerByIdentifier:(id)arg1;

@end
