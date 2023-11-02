
@interface _NSHTTPAlternativeServiceEntry : NSObject <NSCopying> {
    NSString * _alternateHost;
    long long  _alternatePort;
    NSDate * _expirationDate;
    NSString * _host;
    NSString * _partition;
    long long  _port;
    long long  _serviceType;
}

@property (nonatomic, retain) NSString *alternateHost;
@property (nonatomic) long long alternatePort;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) NSString *host;
@property (nonatomic, retain) NSString *partition;
@property (nonatomic) long long port;
@property (nonatomic) long long serviceType;

- (void).cxx_destruct;
- (id)alternateHost;
- (long long)alternatePort;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)host;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)partition;
- (long long)port;
- (long long)serviceType;
- (void)setAlternateHost:(id)arg1;
- (void)setAlternatePort:(long long)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setPartition:(id)arg1;
- (void)setPort:(long long)arg1;
- (void)setServiceType:(long long)arg1;

@end
