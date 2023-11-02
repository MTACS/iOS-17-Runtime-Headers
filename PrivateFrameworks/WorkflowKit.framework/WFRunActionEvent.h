
@interface WFRunActionEvent : WFEvent {
    NSString * _actionIdentifier;
    NSString * _automationType;
    bool  _completed;
    bool  _didRunRemotely;
    NSString * _galleryIdentifier;
    bool  _isInvalidatedSystemAction;
    NSString * _key;
    NSString * _runSource;
    NSString * _shortcutSource;
}

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic, copy) NSString *automationType;
@property (nonatomic) bool completed;
@property (nonatomic) bool didRunRemotely;
@property (nonatomic, copy) NSString *galleryIdentifier;
@property (nonatomic) bool isInvalidatedSystemAction;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *runSource;
@property (nonatomic, copy) NSString *shortcutSource;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)automationType;
- (bool)completed;
- (bool)didRunRemotely;
- (id)galleryIdentifier;
- (bool)isInvalidatedSystemAction;
- (id)key;
- (id)runSource;
- (void)setActionIdentifier:(id)arg1;
- (void)setAutomationType:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setDidRunRemotely:(bool)arg1;
- (void)setGalleryIdentifier:(id)arg1;
- (void)setIsInvalidatedSystemAction:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setRunSource:(id)arg1;
- (void)setShortcutSource:(id)arg1;
- (id)shortcutSource;

@end
