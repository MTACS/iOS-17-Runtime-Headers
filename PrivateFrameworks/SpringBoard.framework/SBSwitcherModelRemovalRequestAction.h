
@interface SBSwitcherModelRemovalRequestAction : NSObject {
    long long  _actionType;
    SBAppLayout * _replacementAppLayout;
}

@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly, copy) SBAppLayout *replacementAppLayout;

+ (id)defaultRemovalPolicyAction;
+ (id)replacementActionWithAppLayout:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithActionType:(long long)arg1;
- (long long)actionType;
- (id)replacementAppLayout;

@end
