
@interface CNGroupIdentityInlineActionsViewConfiguration : NSObject {
    long long  _actionViewStyle;
    NSDictionary * _actionsPerType;
    bool  _displaysUnavailableActionTypes;
    NSString * _geminiChannelIdentifier;
    NSArray * _supportedActionTypes;
}

@property (nonatomic, readonly) long long actionViewStyle;
@property (nonatomic, readonly) NSDictionary *actionsPerType;
@property (nonatomic, readonly) bool displaysUnavailableActionTypes;
@property (nonatomic, retain) NSString *geminiChannelIdentifier;
@property (nonatomic, readonly) NSArray *supportedActionTypes;

- (void).cxx_destruct;
- (long long)actionViewStyle;
- (id)actionsPerType;
- (bool)displaysUnavailableActionTypes;
- (id)geminiChannelIdentifier;
- (id)initWithActions:(id)arg1 displaysUnavailableActionTypes:(bool)arg2;
- (id)initWithDefaultActionItems:(id)arg1 displaysUnavailableActionTypes:(bool)arg2;
- (id)initWithDefaultActionItems:(id)arg1 displaysUnavailableActionTypes:(bool)arg2 actionViewStyle:(long long)arg3;
- (void)setGeminiChannelIdentifier:(id)arg1;
- (id)supportedActionTypes;

@end
