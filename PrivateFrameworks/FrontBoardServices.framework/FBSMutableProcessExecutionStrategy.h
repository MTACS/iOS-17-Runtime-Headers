
@interface FBSMutableProcessExecutionStrategy : FBSProcessExecutionStrategy

@property (nonatomic) unsigned int flags;
@property (nonatomic) long long graphicsPolicy;
@property (nonatomic) long long jetsamPolicy;
@property (nonatomic) unsigned int reason;
@property (nonatomic) long long schedulingPolicy;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
