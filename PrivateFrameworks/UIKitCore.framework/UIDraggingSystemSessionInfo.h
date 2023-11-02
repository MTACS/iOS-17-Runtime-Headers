
@interface UIDraggingSystemSessionInfo : NSObject <NSSecureCoding> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    NSString * _persistentSceneIdentifier;
    int  _processIdentifier;
    unsigned int  _sessionIdentifier;
    bool  _supportsSystemDrag;
}

@property (nonatomic) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, copy) NSString *persistentSceneIdentifier;
@property (nonatomic) int processIdentifier;
@property (nonatomic, copy) NSString *sceneIdentifier;
@property (nonatomic) unsigned int sessionIdentifier;
@property (nonatomic) bool supportsSystemDrag;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)persistentSceneIdentifier;
- (int)processIdentifier;
- (id)sceneIdentifier;
- (unsigned int)sessionIdentifier;
- (void)setAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setPersistentSceneIdentifier:(id)arg1;
- (void)setProcessIdentifier:(int)arg1;
- (void)setSceneIdentifier:(id)arg1;
- (void)setSessionIdentifier:(unsigned int)arg1;
- (void)setSupportsSystemDrag:(bool)arg1;
- (bool)supportsSystemDrag;

@end
