
@interface BDSCloudSyncDiagnosticSyncEngineInfo : NSObject <NSCopying, NSSecureCoding> {
    bool  _establishedSalt;
}

@property (nonatomic) bool establishedSalt;
@property (nonatomic, readonly) NSDictionary *stateForLog;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)establishedSalt;
- (id)initWithCoder:(id)arg1;
- (id)initWithEstablishedSalt:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (void)setEstablishedSalt:(bool)arg1;
- (id)stateForLog;

@end
