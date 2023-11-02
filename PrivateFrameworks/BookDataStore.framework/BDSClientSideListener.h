
@interface BDSClientSideListener : NSObject <BDSClientSideProtocol> {
    <BDSClientSideProtocol> * _delegate;
}

@property (nonatomic) <BDSClientSideProtocol> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)handleServiceNotificationNames:(id)arg1 latestChangeToken:(long long)arg2;
- (void)setDelegate:(id)arg1;

@end
