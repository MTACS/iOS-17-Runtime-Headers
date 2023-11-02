
@interface WFAddAutomationActionEvent : WFEvent {
    NSString * _actionIdentifier;
    unsigned int  _actionIndex;
    NSString * _key;
    NSString * _shortcutIdentifier;
}

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic) unsigned int actionIndex;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *shortcutIdentifier;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (unsigned int)actionIndex;
- (id)key;
- (void)setActionIdentifier:(id)arg1;
- (void)setActionIndex:(unsigned int)arg1;
- (void)setKey:(id)arg1;
- (void)setShortcutIdentifier:(id)arg1;
- (id)shortcutIdentifier;

@end
