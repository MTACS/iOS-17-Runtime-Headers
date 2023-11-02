
@interface VSUIVoiceShortcutCard : VSUIAsyncLoadingCard {
    INIntent * _intent;
    INIntentResponse * _intentResponse;
    NSArray * _sectionCommands;
    NSString * _shortcutIdentifier;
}

@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) INIntentResponse *intentResponse;
@property (nonatomic, readonly) NSArray *sectionCommands;
@property (nonatomic, readonly) NSString *shortcutIdentifier;

- (void).cxx_destruct;
- (void)_configureWithCard:(id)arg1;
- (id)cardIdentifier;
- (id)initWithCard:(id)arg1;
- (id)intent;
- (id)intentResponse;
- (void)loadCardWithCompletion:(id /* block */)arg1;
- (void)loadCardWithContent:(id)arg1 completion:(id /* block */)arg2;
- (id)sectionCommands;
- (id)shortcutIdentifier;

@end
