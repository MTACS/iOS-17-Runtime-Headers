
@interface IDSNWConnectionInfo : NSObject {
    NSUUID * _childConnectionID;
    unsigned long long  _clientUniquePID;
    unsigned long long  _connectionID;
    bool  _isCellular;
    bool  _isQUICPod;
    bool  _isRelay;
    bool  _isValid;
    NSString * _protocolStackDescription;
    NSString * _sessionID;
    NSString * _token;
}

@property (nonatomic, retain) NSUUID *childConnectionID;
@property (nonatomic) unsigned long long clientUniquePID;
@property (nonatomic) unsigned long long connectionID;
@property (nonatomic) bool isCellular;
@property (nonatomic) bool isQUICPod;
@property (nonatomic) bool isRelay;
@property (nonatomic) bool isValid;
@property (nonatomic, retain) NSString *protocolStackDescription;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic, copy) NSString *token;

- (void).cxx_destruct;
- (id)childConnectionID;
- (unsigned long long)clientUniquePID;
- (unsigned long long)connectionID;
- (bool)isCellular;
- (bool)isQUICPod;
- (bool)isRelay;
- (bool)isValid;
- (id)protocolStackDescription;
- (id)sessionID;
- (void)setChildConnectionID:(id)arg1;
- (void)setClientUniquePID:(unsigned long long)arg1;
- (void)setConnectionID:(unsigned long long)arg1;
- (void)setIsCellular:(bool)arg1;
- (void)setIsQUICPod:(bool)arg1;
- (void)setIsRelay:(bool)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setProtocolStackDescription:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
