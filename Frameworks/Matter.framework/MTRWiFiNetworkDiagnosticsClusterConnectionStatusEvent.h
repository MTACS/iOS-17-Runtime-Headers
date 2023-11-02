
@interface MTRWiFiNetworkDiagnosticsClusterConnectionStatusEvent : NSObject <NSCopying> {
    NSNumber * _connectionStatus;
}

@property (nonatomic, copy) NSNumber *connectionStatus;

- (void).cxx_destruct;
- (id)connectionStatus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)setConnectionStatus:(id)arg1;

@end
