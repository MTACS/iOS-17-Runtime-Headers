
@interface SiriCoreNetEventMessage : NSObject {
    NETSchemaNETClientEvent * _clientEvent;
    NSUUID * _netId;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NETSchemaNETClientEvent *clientEvent;
@property (nonatomic, retain) NSUUID *netId;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)clientEvent;
- (id)netId;
- (void)setClientEvent:(id)arg1;
- (void)setNetId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
