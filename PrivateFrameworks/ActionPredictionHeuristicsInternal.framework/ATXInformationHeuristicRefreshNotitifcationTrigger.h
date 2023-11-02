
@interface ATXInformationHeuristicRefreshNotitifcationTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    NSString * _notificationName;
    long long  _notificationType;
    id  _observerToken;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_start;
- (void)_stop;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotification:(id)arg1 type:(long long)arg2;
- (bool)isEqual:(id)arg1;

@end
