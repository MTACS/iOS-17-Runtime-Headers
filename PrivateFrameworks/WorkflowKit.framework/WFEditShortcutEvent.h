
@interface WFEditShortcutEvent : WFEvent {
    unsigned int  _actionCount;
    NSString * _addToSiriBundleIdentifier;
    NSString * _galleryIdentifier;
    NSString * _key;
    unsigned int  _numberOfEngagedSuggestions;
    unsigned int  _numberOfManuallyAddedActions;
    NSString * _shortcutSource;
    unsigned int  _startingActionCount;
}

@property (nonatomic) unsigned int actionCount;
@property (nonatomic, copy) NSString *addToSiriBundleIdentifier;
@property (nonatomic, copy) NSString *galleryIdentifier;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) unsigned int numberOfEngagedSuggestions;
@property (nonatomic) unsigned int numberOfManuallyAddedActions;
@property (nonatomic, copy) NSString *shortcutSource;
@property (nonatomic) unsigned int startingActionCount;

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (void).cxx_destruct;
- (unsigned int)actionCount;
- (id)addToSiriBundleIdentifier;
- (id)galleryIdentifier;
- (id)key;
- (unsigned int)numberOfEngagedSuggestions;
- (unsigned int)numberOfManuallyAddedActions;
- (void)setActionCount:(unsigned int)arg1;
- (void)setAddToSiriBundleIdentifier:(id)arg1;
- (void)setGalleryIdentifier:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setNumberOfEngagedSuggestions:(unsigned int)arg1;
- (void)setNumberOfManuallyAddedActions:(unsigned int)arg1;
- (void)setShortcutSource:(id)arg1;
- (void)setStartingActionCount:(unsigned int)arg1;
- (id)shortcutSource;
- (unsigned int)startingActionCount;

@end
