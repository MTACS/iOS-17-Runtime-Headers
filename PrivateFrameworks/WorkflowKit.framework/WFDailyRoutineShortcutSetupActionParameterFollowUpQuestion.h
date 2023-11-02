
@interface WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion : NSObject {
    NSString * _actionIdentifier;
    NSString * _parameterKey;
    NSString * _prompt;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic, readonly, copy) NSString *parameterKey;
@property (nonatomic, readonly, copy) NSString *prompt;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)initWithPrompt:(id)arg1 actionIdentifier:(id)arg2 parameterKey:(id)arg3;
- (id)parameterKey;
- (id)prompt;

@end
