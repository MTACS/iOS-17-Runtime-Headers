
@interface SKADatabaseTransientSubscriptionHistory : NSObject {
    NSString * _channelIdentifier;
    NSDate * _lastSubscriptionDate;
}

@property (nonatomic, readonly) NSString *channelIdentifier;
@property (nonatomic, readonly) NSDate *lastSubscriptionDate;

- (void).cxx_destruct;
- (id)channelIdentifier;
- (id)initWithChannelIdentifier:(id)arg1 lastSubscriptionDate:(id)arg2;
- (id)initWithCoreDataTransientSubscriptionHistory:(id)arg1;
- (id)lastSubscriptionDate;

@end
