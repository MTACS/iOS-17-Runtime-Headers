
@interface CTDedicatedBearerRequest : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _details;
    long long  _direction;
    unsigned long long  _ip_protocol;
    NSString * _remote_ip;
    NSArray * _remote_ports;
    NSString * _src_ip;
    NSArray * _src_ports;
    NSString * _traffic_class;
}

@property (nonatomic, retain) NSArray *details;
@property (nonatomic) long long direction;
@property (nonatomic) unsigned long long ip_protocol;
@property (nonatomic, retain) NSString *remote_ip;
@property (nonatomic, retain) NSArray *remote_ports;
@property (nonatomic, retain) NSString *src_ip;
@property (nonatomic, retain) NSArray *src_ports;
@property (nonatomic, retain) NSString *traffic_class;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)details;
- (long long)direction;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)ip_protocol;
- (id)remote_ip;
- (id)remote_ports;
- (void)setDetails:(id)arg1;
- (void)setDirection:(long long)arg1;
- (void)setIp_protocol:(unsigned long long)arg1;
- (void)setRemote_ip:(id)arg1;
- (void)setRemote_ports:(id)arg1;
- (void)setSrc_ip:(id)arg1;
- (void)setSrc_ports:(id)arg1;
- (void)setTraffic_class:(id)arg1;
- (id)src_ip;
- (id)src_ports;
- (id)traffic_class;

@end
