
@interface _UIWindowSceneActivationCleanupAction : BSAction

@property (nonatomic, readonly) NSString *interactionIdentifier;

+ (id)actionWithInteractionIdentifier:(id)arg1 responseHandler:(id /* block */)arg2;

- (long long)UIActionType;
- (id)interactionIdentifier;

@end
