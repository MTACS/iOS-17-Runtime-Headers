
@interface Endpoint : NSObject {
    NSUUID * _clientUUID;
    unsigned char  _requireAck;
    bool  _requireEncyption;
}

@property (retain) NSUUID *clientUUID;
@property unsigned char requireAck;
@property bool requireEncyption;

- (void).cxx_destruct;
- (id)clientUUID;
- (id)description;
- (unsigned char)requireAck;
- (bool)requireEncyption;
- (void)setClientUUID:(id)arg1;
- (void)setRequireAck:(unsigned char)arg1;
- (void)setRequireEncyption:(bool)arg1;

@end
