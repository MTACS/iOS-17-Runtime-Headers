
@interface BTAudioRoutingResponse : NSObject <NSSecureCoding> {
    int  _action;
    unsigned int  _clientID;
    NSString * _deviceAddress;
    NSError * _error;
    NSString * _reason;
    NSDictionary * _wxInfo;
}

@property (nonatomic) int action;
@property (nonatomic) unsigned int clientID;
@property (nonatomic, copy) NSString *deviceAddress;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSDictionary *wxInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)action;
- (unsigned int)clientID;
- (id)description;
- (id)deviceAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)reason;
- (void)setAction:(int)arg1;
- (void)setClientID:(unsigned int)arg1;
- (void)setDeviceAddress:(id)arg1;
- (void)setError:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setWxInfo:(id)arg1;
- (id)wxInfo;

@end
