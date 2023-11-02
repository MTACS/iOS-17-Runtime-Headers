
@protocol AVBonjourServiceDelegate <NSObject>

@required

- (void)bonjourService:(AVBonjourService *)arg1 didAcceptConnectionChannel:(AVAirTransport *)arg2;
- (void)bonjourService:(AVBonjourService *)arg1 didCloseChannel:(AVAirTransport *)arg2;

@optional

- (NSDictionary *)bonjourServiceAdditionalTXTRecordInfo:(AVBonjourService *)arg1;

@end
