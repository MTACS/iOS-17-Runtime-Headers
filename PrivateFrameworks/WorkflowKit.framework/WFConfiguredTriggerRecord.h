
@interface WFConfiguredTriggerRecord : WFRecord {
    bool  _editableShortcut;
    bool  _enabled;
    int  _notificationLevel;
    NSData * _selectedEntryMetadata;
    bool  _shouldNotify;
    bool  _shouldPrompt;
    int  _source;
    NSData * _triggerData;
}

@property (nonatomic) bool editableShortcut;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) int notificationLevel;
@property (nonatomic, copy) NSData *selectedEntryMetadata;
@property (nonatomic) bool shouldNotify;
@property (nonatomic) bool shouldPrompt;
@property (nonatomic) int source;
@property (nonatomic, copy) NSData *triggerData;

- (void).cxx_destruct;
- (bool)editableShortcut;
- (bool)isEnabled;
- (int)notificationLevel;
- (id)selectedEntryMetadata;
- (void)setEditableShortcut:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setNotificationLevel:(int)arg1;
- (void)setSelectedEntryMetadata:(id)arg1;
- (void)setShouldNotify:(bool)arg1;
- (void)setShouldPrompt:(bool)arg1;
- (void)setSource:(int)arg1;
- (void)setTriggerData:(id)arg1;
- (bool)shouldNotify;
- (bool)shouldPrompt;
- (int)source;
- (id)triggerData;

@end
