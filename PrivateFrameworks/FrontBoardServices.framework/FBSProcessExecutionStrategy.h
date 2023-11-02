
@interface FBSProcessExecutionStrategy : NSObject <BSDescriptionProviding, NSCopying> {
    unsigned int  _bksFlags;
    unsigned int  _bksReason;
    bool  _customPolicy;
    long long  _graphicsPolicy;
    long long  _jetsamPolicy;
    long long  _schedulingPolicy;
    NSString * _strategyName;
}

@property (getter=isCustomPolicy, nonatomic) bool customPolicy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int flags;
@property (nonatomic) long long graphicsPolicy;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long jetsamPolicy;
@property (nonatomic) unsigned int reason;
@property (nonatomic) long long schedulingPolicy;
@property (nonatomic, copy) NSString *strategyName;
@property (readonly) Class superclass;

+ (id)background;
+ (id)backgroundWithUI;
+ (void)initialize;
+ (id)policyWithReason:(unsigned int)arg1 flags:(unsigned int)arg2;
+ (id)strategyForSchedulingPolicy:(long long)arg1 graphicsPolicy:(long long)arg2 jetsamPolicy:(long long)arg3;
+ (id)userInteractive;
+ (id)userInteractiveWithoutUI;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned int)flags;
- (long long)graphicsPolicy;
- (bool)isCustomPolicy;
- (long long)jetsamPolicy;
- (unsigned int)reason;
- (long long)schedulingPolicy;
- (void)setCustomPolicy:(bool)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setGraphicsPolicy:(long long)arg1;
- (void)setJetsamPolicy:(long long)arg1;
- (void)setReason:(unsigned int)arg1;
- (void)setSchedulingPolicy:(long long)arg1;
- (void)setStrategyName:(id)arg1;
- (id)strategyName;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end