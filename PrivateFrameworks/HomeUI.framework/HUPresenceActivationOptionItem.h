
@interface HUPresenceActivationOptionItem : HFItem {
    unsigned long long  _activationGranularity;
    unsigned long long  _eventType;
    HMHome * _home;
    bool  _selected;
    HFSelectedUserCollection * _selectedUsers;
    unsigned long long  _style;
}

@property (nonatomic, readonly) unsigned long long activationGranularity;
@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly) HMHome *home;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, retain) HFSelectedUserCollection *selectedUsers;
@property (nonatomic, readonly) unsigned long long style;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)_summaryTitle;
- (unsigned long long)activationGranularity;
- (unsigned long long)eventType;
- (id)home;
- (id)init;
- (id)initWithEventType:(unsigned long long)arg1 selectedUsers:(id)arg2 activationGranularity:(unsigned long long)arg3 style:(unsigned long long)arg4 home:(id)arg5;
- (bool)isSelected;
- (id)selectedUsers;
- (void)setSelected:(bool)arg1;
- (void)setSelectedUsers:(id)arg1;
- (unsigned long long)style;

@end
