
@interface PKDiscoveryNotification : PKDiscoveryObject <NSSecureCoding> {
    NSDictionary * _actionInfo;
    NSString * _actionTitleKey;
    long long  _actionType;
    bool  _delivered;
    NSString * _localizedActionTitle;
    NSString * _localizedMessage;
    NSString * _localizedTitle;
    NSString * _messageKey;
    NSDate * _scheduledDeliveryDate;
    NSString * _titleKey;
}

@property (nonatomic, retain) NSDictionary *actionInfo;
@property (nonatomic, copy) NSString *actionTitleKey;
@property (nonatomic) long long actionType;
@property (getter=isDelivered, nonatomic) bool delivered;
@property (nonatomic, readonly, copy) NSString *discoveryCardIdentifier;
@property (nonatomic, readonly, copy) NSString *localizedActionTitle;
@property (nonatomic, readonly, copy) NSString *localizedMessage;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, copy) NSString *messageKey;
@property (nonatomic, readonly) long long passQualifier;
@property (nonatomic, retain) NSDate *scheduledDeliveryDate;
@property (nonatomic, copy) NSString *titleKey;
@property (nonatomic, readonly, copy) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionInfo;
- (id)actionTitleKey;
- (long long)actionType;
- (id)description;
- (id)discoveryCardIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isDelivered;
- (bool)isEqualForDisplayToNotification:(id)arg1;
- (void)localizeWithBundle:(id)arg1;
- (id)localizedActionTitle;
- (id)localizedMessage;
- (id)localizedTitle;
- (id)messageKey;
- (long long)passQualifier;
- (void)scheduleDeliveryForCurrentDate:(id)arg1;
- (id)scheduledDeliveryDate;
- (void)setActionInfo:(id)arg1;
- (void)setActionTitleKey:(id)arg1;
- (void)setActionType:(long long)arg1;
- (void)setDelivered:(bool)arg1;
- (void)setMessageKey:(id)arg1;
- (void)setScheduledDeliveryDate:(id)arg1;
- (void)setTitleKey:(id)arg1;
- (id)titleKey;
- (void)updateForRuleResult:(bool)arg1;
- (void)updateWithNotification:(id)arg1;
- (id)url;

@end
