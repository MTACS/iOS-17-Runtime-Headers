
@interface FTMutableNlShortcutFuzzyMatchMessage : FTNlShortcutFuzzyMatchMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTShortcutFuzzyMatchRequest *session_messageAsFTShortcutFuzzyMatchRequest;
@property (nonatomic, copy) FTShortcutFuzzyMatchResponse *session_messageAsFTShortcutFuzzyMatchResponse;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTShortcutFuzzyMatchRequest;
- (id)session_messageAsFTShortcutFuzzyMatchResponse;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTShortcutFuzzyMatchRequest:(id)arg1;
- (void)setSession_messageAsFTShortcutFuzzyMatchResponse:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
