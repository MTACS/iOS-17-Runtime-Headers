
@interface SODNSSRVResponse : NSObject {
    NSString * _host;
    unsigned short  _port;
}

@property (nonatomic, retain) NSString *host;
@property (nonatomic) unsigned short port;

- (void).cxx_destruct;
- (id)description;
- (id)host;
- (id)init;
- (unsigned short)port;
- (void)setHost:(id)arg1;
- (void)setPort:(unsigned short)arg1;

@end
