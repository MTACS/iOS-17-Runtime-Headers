
@interface QSSMutableShortcutFuzzyMatchRequest : QSSShortcutFuzzyMatchRequest

@property (nonatomic, copy) NSString *context;
@property (nonatomic, copy) NSString *device_type;
@property (nonatomic, copy) NSString *interaction_id;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSString *request_id;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSArray *shortcuts;
@property (nonatomic, copy) QSSShortcutFuzzyMatchRequest_StringTokenPair *utterance;

- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)device_type;
- (id)init;
- (id)interaction_id;
- (id)locale;
- (id)request_id;
- (id)session_id;
- (void)setContext:(id)arg1;
- (void)setDevice_type:(id)arg1;
- (void)setInteraction_id:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setRequest_id:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setShortcuts:(id)arg1;
- (void)setUtterance:(id)arg1;
- (id)shortcuts;
- (id)utterance;

@end
