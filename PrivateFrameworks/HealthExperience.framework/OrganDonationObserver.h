
@interface OrganDonationObserver : NSObject {
    <OrganDonationObserverDelegate> * _delegate;
    int  _organDonationChangedToken;
}

@property (nonatomic) <OrganDonationObserverDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)startObservingChanges;

@end
