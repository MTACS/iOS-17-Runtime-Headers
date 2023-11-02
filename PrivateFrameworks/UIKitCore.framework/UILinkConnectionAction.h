
@interface UILinkConnectionAction : BSAction

@property (nonatomic, readonly) LNConnectionAction *action;

- (long long)UIActionType;
- (id)action;
- (id)initWithAction:(id)arg1 responseHandler:(id /* block */)arg2;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;

@end
