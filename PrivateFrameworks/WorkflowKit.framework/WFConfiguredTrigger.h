
@interface WFConfiguredTrigger : WFDatabaseObjectDescriptor {
    bool  _editableShortcut;
    bool  _enabled;
    int  _notificationLevel;
    NSData * _selectedEntryMetadata;
    bool  _shouldNotify;
    bool  _shouldPrompt;
    int  _source;
    WFTrigger * _trigger;
    NSString * _workflowID;
}

@property (nonatomic, readonly) bool editableShortcut;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) int notificationLevel;
@property (nonatomic, readonly) NSData *selectedEntryMetadata;
@property (nonatomic, readonly) bool shouldNotify;
@property (nonatomic, readonly) bool shouldPrompt;
@property (nonatomic, readonly) int source;
@property (nonatomic, readonly) WFTrigger *trigger;
@property (nonatomic, readonly) NSString *workflowID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)editableShortcut;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 workflowID:(id)arg2 trigger:(id)arg3 shouldPrompt:(bool)arg4 shouldNotify:(bool)arg5 enabled:(bool)arg6 editableShortcut:(bool)arg7 selectedEntryMetadata:(id)arg8;
- (id)initWithIdentifier:(id)arg1 workflowID:(id)arg2 trigger:(id)arg3 shouldPrompt:(bool)arg4 shouldNotify:(bool)arg5 enabled:(bool)arg6 triggerSource:(int)arg7 notificationLevel:(int)arg8 editableShortcut:(bool)arg9 selectedEntryMetadata:(id)arg10;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (int)notificationLevel;
- (id)selectedEntryMetadata;
- (bool)shouldNotify;
- (bool)shouldPrompt;
- (int)source;
- (id)trigger;
- (id)workflowID;

@end
