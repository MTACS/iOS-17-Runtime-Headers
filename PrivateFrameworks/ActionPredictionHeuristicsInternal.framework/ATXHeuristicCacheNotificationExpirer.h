
@interface ATXHeuristicCacheNotificationExpirer : ATXHeuristicCacheExpirer <NSSecureCoding> {
    bool  _isLocal;
    NSString * _notificationName;
    id  _token;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_start;
- (void)_stop;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initDarwin:(id)arg1;
- (id)initLocal:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
