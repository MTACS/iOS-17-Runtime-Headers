
@interface WFRunShortcutEvent : WFEvent {
    unsigned int  _actionCount;
    NSString * _automationSuggestionsTrialIdentifier;
    NSString * _automationType;
    bool  _completed;
    bool  _didRunRemotely;
    NSString * _galleryIdentifier;
    bool  _isFromAutomationSuggestion;
    NSString * _key;
    unsigned int  _numberOfDialogsPresented;
    NSString * _runSource;
    NSString * _scriptingRunBundleIdentifier;
    NSString * _shortcutSource;
}

@property (nonatomic) unsigned int actionCount;
@property (nonatomic, copy) NSString *automationSuggestionsTrialIdentifier;
@property (nonatomic, copy) NSString *automationType;
@property (nonatomic) bool completed;
@property (nonatomic) bool didRunRemotely;
@property (nonatomic, copy) NSString *galleryIdentifier;
@property (nonatomic) bool isFromAutomationSuggestion;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) unsigned int numberOfDialogsPresented;
@property (nonatomic, copy) NSString *runSource;
@property (nonatomic, copy) NSString *scriptingRunBundleIdentifier;
@property (nonatomic, copy) NSString *shortcutSource;

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (void).cxx_destruct;
- (unsigned int)actionCount;
- (id)automationSuggestionsTrialIdentifier;
- (id)automationType;
- (bool)completed;
- (bool)didRunRemotely;
- (id)galleryIdentifier;
- (bool)isFromAutomationSuggestion;
- (id)key;
- (unsigned int)numberOfDialogsPresented;
- (id)runSource;
- (id)scriptingRunBundleIdentifier;
- (void)setActionCount:(unsigned int)arg1;
- (void)setAutomationSuggestionsTrialIdentifier:(id)arg1;
- (void)setAutomationType:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setDidRunRemotely:(bool)arg1;
- (void)setGalleryIdentifier:(id)arg1;
- (void)setIsFromAutomationSuggestion:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setNumberOfDialogsPresented:(unsigned int)arg1;
- (void)setRunSource:(id)arg1;
- (void)setScriptingRunBundleIdentifier:(id)arg1;
- (void)setShortcutSource:(id)arg1;
- (id)shortcutSource;

@end
