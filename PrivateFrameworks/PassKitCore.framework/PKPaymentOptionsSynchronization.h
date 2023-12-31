
@interface PKPaymentOptionsSynchronization : NSObject {
    <PKPaymentOptionsSynchronizationDelegate> * _delegate;
    bool  _shouldSyncToCloud;
}

@property (nonatomic) <PKPaymentOptionsSynchronizationDelegate> *delegate;
@property (nonatomic) bool shouldSyncToCloud;

+ (bool)shouldSyncToCloud;

- (void).cxx_destruct;
- (void)_localeDidChangeNotification:(id)arg1;
- (void)_updateSynchronizationBehavior;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setShouldSyncToCloud:(bool)arg1;
- (bool)shouldSyncToCloud;

@end
