
@interface AMSPushHandler : NSObject {
    <AMSBagProtocol> * _bag;
    <AMSPushHandlerContract> * _bagContract;
    AMSPushConfiguration * _configuration;
}

@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, readonly) <AMSPushHandlerContract> *bagContract;
@property (nonatomic, readonly) AMSPushConfiguration *configuration;
@property (nonatomic) <AMSPushHandlerDelegate> *delegate;
@property (nonatomic, readonly) NSDictionary *enabledParsables;

- (void).cxx_destruct;
- (void)_handlePushNotification:(id)arg1;
- (id)bag;
- (id)bagContract;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (id)enabledParsables;
- (void)handleNotification:(id)arg1;
- (id)initWithConfiguration:(id)arg1 bag:(id)arg2;
- (id)initWithConfiguration:(id)arg1 bagContract:(id)arg2;
- (void)registerForEngagementPushes;
- (void)setDelegate:(id)arg1;
- (bool)shouldHandleNotification:(id)arg1;

@end
