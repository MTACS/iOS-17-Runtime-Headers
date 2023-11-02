
@interface RWIDriverConfiguration : NSObject <NSCopying> {
    NSString * _driverHost;
    NSString * _driverIdentifier;
    NSString * _driverName;
    long long  _driverPort;
    NSString * _driverVersion;
}

@property (nonatomic, copy) NSString *driverHost;
@property (nonatomic, copy) NSString *driverIdentifier;
@property (nonatomic, copy) NSString *driverName;
@property (nonatomic) long long driverPort;
@property (nonatomic, copy) NSString *driverVersion;

+ (id)decodeFromPayload:(id)arg1;
+ (bool)isValidPayload:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)driverHost;
- (id)driverIdentifier;
- (id)driverName;
- (long long)driverPort;
- (id)driverVersion;
- (void)encodeToPayload:(id)arg1;
- (id)init;
- (void)setDriverHost:(id)arg1;
- (void)setDriverIdentifier:(id)arg1;
- (void)setDriverName:(id)arg1;
- (void)setDriverPort:(long long)arg1;
- (void)setDriverVersion:(id)arg1;

@end
