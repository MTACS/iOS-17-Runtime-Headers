
@interface FBSSceneHostHandle : NSObject {
    BSAuditToken * _auditToken;
    bool  _local;
}

@property (nonatomic, readonly) BSAuditToken *auditToken;
@property (getter=isLocal, nonatomic, readonly) bool local;

+ (id)handleWithAuditToken:(id)arg1;
+ (id)localHandle;

- (void).cxx_destruct;
- (id)auditToken;
- (id)description;
- (bool)isLocal;

@end
