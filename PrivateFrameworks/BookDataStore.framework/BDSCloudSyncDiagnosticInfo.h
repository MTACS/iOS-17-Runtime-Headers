
@interface BDSCloudSyncDiagnosticInfo : NSObject <NSCopying, NSSecureCoding> {
    long long  _accountStatus;
    NSString * _container;
    bool  _enabledSync;
    NSArray * _entityInfos;
    bool  _gettingAccountInfo;
    BDSCloudSyncDiagnosticDatabaseInfo * _privateDatabaseInfo;
    BDSCloudSyncDiagnosticSyncEngineInfo * _privateDatabaseSyncEngineInfo;
}

@property (nonatomic) long long accountStatus;
@property (nonatomic, copy) NSString *container;
@property (nonatomic) bool enabledSync;
@property (nonatomic, retain) NSArray *entityInfos;
@property (nonatomic) bool gettingAccountInfo;
@property (nonatomic, retain) BDSCloudSyncDiagnosticDatabaseInfo *privateDatabaseInfo;
@property (nonatomic, retain) BDSCloudSyncDiagnosticSyncEngineInfo *privateDatabaseSyncEngineInfo;
@property (nonatomic, readonly) NSDictionary *stateForLog;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)accountStatus;
- (id)container;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)enabledSync;
- (void)encodeWithCoder:(id)arg1;
- (id)entityInfos;
- (bool)gettingAccountInfo;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabledSync:(bool)arg1 accountStatus:(long long)arg2 container:(id)arg3 gettingAccountInfo:(bool)arg4 privateDatabaseInfo:(id)arg5 privateDatabaseSyncEngineInfo:(id)arg6 entityInfos:(id)arg7;
- (id)privateDatabaseInfo;
- (id)privateDatabaseSyncEngineInfo;
- (void)setAccountStatus:(long long)arg1;
- (void)setContainer:(id)arg1;
- (void)setEnabledSync:(bool)arg1;
- (void)setEntityInfos:(id)arg1;
- (void)setGettingAccountInfo:(bool)arg1;
- (void)setPrivateDatabaseInfo:(id)arg1;
- (void)setPrivateDatabaseSyncEngineInfo:(id)arg1;
- (id)stateForLog;

@end
