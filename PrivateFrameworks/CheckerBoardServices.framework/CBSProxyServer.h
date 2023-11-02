
@interface CBSProxyServer : NSObject <NSSecureCoding> {
    NSNumber * _port;
    NSString * _server;
    NSString * _token;
}

@property (nonatomic, retain) NSNumber *port;
@property (nonatomic, retain) NSString *server;
@property (nonatomic, retain) NSString *token;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithServer:(id)arg1 port:(id)arg2 token:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)port;
- (id)server;
- (void)setPort:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
