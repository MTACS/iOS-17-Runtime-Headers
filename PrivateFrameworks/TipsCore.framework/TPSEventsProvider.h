
@interface TPSEventsProvider : NSObject {
    <TPSEventsProviderDelegate> * _delegate;
}

@property (nonatomic) <TPSEventsProviderDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)deregisterAllEventsForCallback;
- (void)deregisterEventsForCallback:(id)arg1;
- (void)queryEvents:(id)arg1;
- (void)registerEventsForCallback:(id)arg1;
- (void)registerEventsForWakingCallback:(id)arg1 clientIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
