
@interface HKNotificationSyncStoreServerConfiguration : HKTaskConfiguration {
    NSString * _clientIdentifier;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
