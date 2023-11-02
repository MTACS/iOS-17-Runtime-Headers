
@interface CKMenuBarManager : NSObject {
    UIKeyCommand * _allMessagesCommand;
    NSArray * _filterCommands;
    UIKeyCommand * _knownSenderCommand;
    UIKeyCommand * _oscarCommand;
    UIKeyCommand * _recentlyDeletedCommand;
    UIKeyCommand * _unknownSenderCommand;
    UIKeyCommand * _unreadFilterCommand;
}

@property (nonatomic, retain) UIKeyCommand *allMessagesCommand;
@property (nonatomic, retain) NSArray *filterCommands;
@property (nonatomic, retain) UIKeyCommand *knownSenderCommand;
@property (nonatomic, retain) UIKeyCommand *oscarCommand;
@property (nonatomic, retain) UIKeyCommand *recentlyDeletedCommand;
@property (nonatomic, retain) UIKeyCommand *unknownSenderCommand;
@property (nonatomic, retain) UIKeyCommand *unreadFilterCommand;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allKeyboardShortcutKeyCommands;
- (id)allMessagesCommand;
- (id)filterCommands;
- (id)knownSenderCommand;
- (id)oscarCommand;
- (id)recentlyDeletedCommand;
- (void)setAllMessagesCommand:(id)arg1;
- (void)setFilterCommands:(id)arg1;
- (void)setKnownSenderCommand:(id)arg1;
- (void)setOscarCommand:(id)arg1;
- (void)setRecentlyDeletedCommand:(id)arg1;
- (void)setUnknownSenderCommand:(id)arg1;
- (void)setUnreadFilterCommand:(id)arg1;
- (id)unknownSenderCommand;
- (id)unreadFilterCommand;

@end
