
@interface MTRThreadNetworkDiagnosticsClusterSecurityPolicy : NSObject <NSCopying> {
    NSNumber * _flags;
    NSNumber * _rotationTime;
}

@property (nonatomic, copy) NSNumber *flags;
@property (nonatomic, copy) NSNumber *rotationTime;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)flags;
- (id)init;
- (id)rotationTime;
- (void)setFlags:(id)arg1;
- (void)setRotationTime:(id)arg1;

@end
