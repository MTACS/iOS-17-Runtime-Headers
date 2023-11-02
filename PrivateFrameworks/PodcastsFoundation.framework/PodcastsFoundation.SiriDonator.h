
@interface PodcastsFoundation.SiriDonator : NSObject {
    void _donationInProgress;
    void _throttleInterval;
    void accountController;
    void backgroundTaskManager;
    void mediaRequestController;
    void podcastsUpdateSubscription;
    void workQueue;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithAccountController:(id)arg1 backgroundTaskManager:(id)arg2;
- (void)startDonation;

@end
