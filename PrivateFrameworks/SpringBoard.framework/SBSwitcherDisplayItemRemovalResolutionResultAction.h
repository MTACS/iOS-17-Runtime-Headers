
@interface SBSwitcherDisplayItemRemovalResolutionResultAction : NSObject {
    long long  _actionType;
    SBAppLayout * _appLayout;
    SBAppLayout * _replacementAppLayout;
}

@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly, copy) SBAppLayout *appLayout;
@property (nonatomic, readonly, copy) SBAppLayout *replacementAppLayout;

+ (id)defaultRemovalPolicyActionWithAppLayout:(id)arg1;
+ (id)replacementActionWithAppLayout:(id)arg1 replacementAppLayout:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithAppLayout:(id)arg1 actionType:(long long)arg2;
- (long long)actionType;
- (id)appLayout;
- (id)replacementAppLayout;

@end
