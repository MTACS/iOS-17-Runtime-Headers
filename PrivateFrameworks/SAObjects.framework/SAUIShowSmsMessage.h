
@interface SAUIShowSmsMessage : SAUISnippet

@property (nonatomic) bool showAsDraft;
@property (nonatomic, retain) SASmsSms *sms;

+ (id)showSmsMessage;
+ (id)showSmsMessageWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setShowAsDraft:(bool)arg1;
- (void)setSms:(id)arg1;
- (bool)showAsDraft;
- (id)sms;

@end
