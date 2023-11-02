
@interface APSChannelSubscriptionFailure : NSObject {
    NSString * _channelID;
    int  _failureReason;
    NSString * _pushTopic;
}

@property (nonatomic, retain) NSString *channelID;
@property (nonatomic) int failureReason;
@property (nonatomic, retain) NSString *pushTopic;

- (void).cxx_destruct;
- (id)channelID;
- (id)description;
- (int)failureReason;
- (id)pushTopic;
- (void)setChannelID:(id)arg1;
- (void)setFailureReason:(int)arg1;
- (void)setPushTopic:(id)arg1;

@end
