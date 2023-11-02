
@interface ATXContextualActionsLogger : NSObject {
    BPSPublisher * _publisher;
    <ATXPETEventTracker2Protocol> * _tracker;
}

@property (nonatomic, retain) BPSPublisher *publisher;
@property (nonatomic, retain) <ATXPETEventTracker2Protocol> *tracker;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDefaultTrackerAndPublisher;
- (id)initWithTracker:(id)arg1 andPublisher:(id)arg2;
- (void)logDailyContextualActions;
- (id)populateContextualActionEventFromBiomeEvent:(id)arg1 withTimeStamp:(double)arg2;
- (id)publisher;
- (void)sendEvent:(id)arg1 usingPetTracker:(id)arg2;
- (void)setPublisher:(id)arg1;
- (void)setTracker:(id)arg1;
- (id)tracker;

@end
