
@interface SKADatabaseSubscriptionAssertion : NSObject {
    NSString * _applicationIdentifier;
    NSString * _channelIdentifier;
    NSString * _statusTypeIdentifier;
}

@property (nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) NSString *channelIdentifier;
@property (nonatomic, readonly) NSString *statusTypeIdentifier;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)channelIdentifier;
- (id)initWithChannelIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 applicationIdentifier:(id)arg3;
- (id)initWithCoreDataSubscriptionAssertion:(id)arg1;
- (id)statusTypeIdentifier;

@end
