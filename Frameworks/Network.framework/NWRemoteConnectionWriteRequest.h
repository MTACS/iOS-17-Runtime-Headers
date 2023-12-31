
@interface NWRemoteConnectionWriteRequest : NSObject {
    NSUUID * _clientID;
    NSData * _data;
}

@property (retain) NSUUID *clientID;
@property (retain) NSData *data;

- (void).cxx_destruct;
- (id)clientID;
- (id)data;
- (id)initWithData:(id)arg1 clientID:(id)arg2;
- (void)setClientID:(id)arg1;
- (void)setData:(id)arg1;

@end
