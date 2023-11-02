
@interface MFLANHandoffContext : NSObject {
    NSString * _host;
    unsigned short  _port;
}

@property (nonatomic, copy) NSString *host;
@property (nonatomic) unsigned short port;

- (void)dealloc;
- (id)host;
- (unsigned short)port;
- (void)setHost:(id)arg1;
- (void)setPort:(unsigned short)arg1;

@end
