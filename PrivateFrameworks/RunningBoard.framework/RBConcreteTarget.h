
@interface RBConcreteTarget : NSObject <NSCopying, RBConcreteTargeting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) RBSProcessIdentity *identity;
@property (nonatomic, readonly) RBProcess *process;
@property (readonly) Class superclass;
@property (getter=isSystem, nonatomic, readonly) bool system;

+ (id)systemTarget;
+ (id)targetWithIdentity:(id)arg1 environment:(id)arg2;
+ (id)targetWithProcess:(id)arg1 environment:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createRBSTarget;
- (id)description;
- (id)environment;
- (id)identity;
- (bool)isSystem;
- (id)process;

@end
