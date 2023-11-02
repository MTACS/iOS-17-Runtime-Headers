
@interface VCNWConnectionInfo : VCObject {
    NSObject<OS_nw_connection> * _connection;
    NSString * _connectionID;
    NSObject<OS_nw_parameters> * _parameters;
    VCNetworkAddress * _remoteAddress;
}

@property (nonatomic, retain) NSObject<OS_nw_connection> *connection;
@property (nonatomic, copy) NSString *connectionID;
@property (nonatomic, retain) NSObject<OS_nw_parameters> *parameters;
@property (nonatomic, copy) VCNetworkAddress *remoteAddress;

- (id)connection;
- (id)connectionID;
- (void)dealloc;
- (bool)isSameRemoteAddress:(id)arg1;
- (id)newParametersFromConnection;
- (id)newRemoteAddressFromConnection;
- (id)parameters;
- (id)remoteAddress;
- (void)setConnection:(id)arg1;
- (void)setConnectionID:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setRemoteAddress:(id)arg1;

@end
