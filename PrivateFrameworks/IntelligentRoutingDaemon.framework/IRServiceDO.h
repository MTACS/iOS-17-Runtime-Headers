
@interface IRServiceDO : NSObject <NSCopying, NSSecureCoding> {
    NSString * _clientIdentifier;
    NSDate * _lastSeenDate;
    NSString * _serviceIdentifier;
    long long  _servicePackage;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSDate *lastSeenDate;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) long long servicePackage;

+ (id)serviceDOWithLastSeenDate:(id)arg1 clientIdentifier:(id)arg2 serviceIdentifier:(id)arg3 servicePackage:(long long)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)copyWithReplacementClientIdentifier:(id)arg1;
- (id)copyWithReplacementLastSeenDate:(id)arg1;
- (id)copyWithReplacementServiceIdentifier:(id)arg1;
- (id)copyWithReplacementServicePackage:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLastSeenDate:(id)arg1 clientIdentifier:(id)arg2 serviceIdentifier:(id)arg3 servicePackage:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToServiceDO:(id)arg1;
- (id)lastSeenDate;
- (id)serviceIdentifier;
- (long long)servicePackage;

@end
