
@interface BDSCloudSyncDiagnosticDatabaseInfo : NSObject <NSCopying, NSSecureCoding> {
    bool  _attached;
    NSString * _container;
    bool  _establishedSalt;
}

@property (nonatomic) bool attached;
@property (nonatomic, copy) NSString *container;
@property (nonatomic) bool establishedSalt;
@property (nonatomic, readonly) NSDictionary *stateForLog;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)attached;
- (id)container;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)establishedSalt;
- (id)initWithAttached:(bool)arg1 establishedSalt:(bool)arg2 container:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)setAttached:(bool)arg1;
- (void)setContainer:(id)arg1;
- (void)setEstablishedSalt:(bool)arg1;
- (id)stateForLog;

@end
