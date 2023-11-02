
@interface WFCreateFolderEvent : WFEvent {
    NSString * _folderSource;
    unsigned int  _icon;
    NSString * _key;
    unsigned int  _shortcutCount;
}

@property (nonatomic, copy) NSString *folderSource;
@property (nonatomic) unsigned int icon;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) unsigned int shortcutCount;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)folderSource;
- (unsigned int)icon;
- (id)key;
- (void)setFolderSource:(id)arg1;
- (void)setIcon:(unsigned int)arg1;
- (void)setKey:(id)arg1;
- (void)setShortcutCount:(unsigned int)arg1;
- (unsigned int)shortcutCount;

@end
