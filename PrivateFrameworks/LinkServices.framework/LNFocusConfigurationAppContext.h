
@interface LNFocusConfigurationAppContext : LNActionAppContext <NSCopying, NSSecureCoding> {
    NSPredicate * _notificationFilterPredicate;
    NSString * _targetContentIdentifierPrefix;
}

@property (nonatomic, readonly) NSPredicate *notificationFilterPredicate;
@property (nonatomic, readonly, copy) NSString *targetContentIdentifierPrefix;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotificationFilterPredicate:(id)arg1 targetContentIdentifierPrefix:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)notificationFilterPredicate;
- (id)targetContentIdentifierPrefix;

@end
