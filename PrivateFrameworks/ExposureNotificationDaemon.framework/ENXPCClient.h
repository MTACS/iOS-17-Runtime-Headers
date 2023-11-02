
@interface ENXPCClient : NSObject {
    int  _accessLevel;
    int  _appAPIVersion;
    ENRegion * _appRegion;
    bool  _entitledForDifferentialPrivacy;
    bool  _entitledForLogging;
    bool  _entitledForTestVerification;
    bool  _entitledToShowBuddy;
    bool  _entitledToSkipFileSigningVerification;
    bool  _entitledToSkipKeyReleasePrompt;
    int  _pid;
    NSString * _signingIdentity;
}

@property (nonatomic) int accessLevel;
@property (nonatomic, readonly) int appAPIVersion;
@property (nonatomic, readonly, copy) ENRegion *appRegion;
@property (nonatomic, readonly) bool entitledForDifferentialPrivacy;
@property (nonatomic) bool entitledForLogging;
@property (nonatomic, readonly) bool entitledForTestVerification;
@property (nonatomic) bool entitledToShowBuddy;
@property (nonatomic) bool entitledToSkipFileSigningVerification;
@property (nonatomic) bool entitledToSkipKeyReleasePrompt;
@property (nonatomic) int pid;
@property (nonatomic, copy) NSString *signingIdentity;

+ (id)clientWithAuditToken:(struct { unsigned int x1[8]; })arg1 pid:(int)arg2;

- (void).cxx_destruct;
- (int)accessLevel;
- (void)activateWithAppAPIVersion:(int)arg1 regionISO:(id)arg2;
- (int)appAPIVersion;
- (id)appRegion;
- (id)description;
- (bool)entitledForDifferentialPrivacy;
- (bool)entitledForLogging;
- (bool)entitledForTestVerification;
- (bool)entitledToShowBuddy;
- (bool)entitledToSkipFileSigningVerification;
- (bool)entitledToSkipKeyReleasePrompt;
- (int)pid;
- (void)setAccessLevel:(int)arg1;
- (void)setEntitledForLogging:(bool)arg1;
- (void)setEntitledToShowBuddy:(bool)arg1;
- (void)setEntitledToSkipFileSigningVerification:(bool)arg1;
- (void)setEntitledToSkipKeyReleasePrompt:(bool)arg1;
- (void)setPid:(int)arg1;
- (void)setSigningIdentity:(id)arg1;
- (id)signingIdentity;

@end
