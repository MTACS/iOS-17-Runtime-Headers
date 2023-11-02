
@interface MTRWiFiNetworkDiagnosticsClusterDisconnectionEvent : NSObject <NSCopying> {
    NSNumber * _reasonCode;
}

@property (nonatomic, copy) NSNumber *reasonCode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)reasonCode;
- (void)setReasonCode:(id)arg1;

@end
