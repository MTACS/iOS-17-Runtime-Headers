
@interface MTRWiFiNetworkDiagnosticsClusterAssociationFailureEvent : NSObject <NSCopying> {
    NSNumber * _associationFailure;
    NSNumber * _status;
}

@property (nonatomic, copy) NSNumber *associationFailure;
@property (nonatomic, copy) NSNumber *status;

- (void).cxx_destruct;
- (id)associationFailure;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)setAssociationFailure:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end
