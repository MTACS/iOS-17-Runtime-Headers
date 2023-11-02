
@interface FCChannelUpsellTrigger : NSObject {
    NSString * _nonSubscriberUpsellArticleID;
    NSString * _subscriberUpsellArticleID;
    long long  _triggerCount;
    unsigned long long  _triggerMethod;
}

@property (nonatomic, copy) NSString *nonSubscriberUpsellArticleID;
@property (nonatomic, copy) NSString *subscriberUpsellArticleID;
@property (nonatomic) long long triggerCount;
@property (nonatomic) unsigned long long triggerMethod;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)arg1;
- (id)nonSubscriberUpsellArticleID;
- (void)setNonSubscriberUpsellArticleID:(id)arg1;
- (void)setSubscriberUpsellArticleID:(id)arg1;
- (void)setTriggerCount:(long long)arg1;
- (void)setTriggerMethod:(unsigned long long)arg1;
- (id)subscriberUpsellArticleID;
- (long long)triggerCount;
- (unsigned long long)triggerMethod;

@end
