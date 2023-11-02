
@interface HVDonationReceiver : NSObject {
    BMBiomeScheduler * _biomeScheduler;
    BPSSink * _biomeSink;
    NSObject<OS_dispatch_queue> * _biomeSubQueue;
    HVQueues * _queues;
}

+ (id)defaultReceiver;

- (void).cxx_destruct;
- (void)_setUpUserActivityDonations;
- (bool)deleteContentWithRequest:(id)arg1 error:(id*)arg2;
- (bool)donateInteractions:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3;
- (bool)donateSearchableItems:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3;
- (bool)donateUserAction:(id)arg1 searchableItem:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithQueues:(id)arg1;

@end
