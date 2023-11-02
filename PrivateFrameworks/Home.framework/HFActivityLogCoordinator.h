
@interface HFActivityLogCoordinator : NSObject {
    HFActivityLogCoordinator_Swift * _coordinator;
    <HFActivityLogCoordinatorDelegate> * _delegate;
    long long  _eventCount;
    HMHome * _home;
}

@property (nonatomic, retain) HFActivityLogCoordinator_Swift *coordinator;
@property (nonatomic) <HFActivityLogCoordinatorDelegate> *delegate;
@property (nonatomic) long long eventCount;
@property (nonatomic, readonly) HMHome *home;

- (void).cxx_destruct;
- (id)coordinator;
- (id)delegate;
- (long long)eventCount;
- (id)home;
- (id)initWithHome:(id)arg1;
- (void)prefetchEventsSinceDate:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEventCount:(long long)arg1;

@end
