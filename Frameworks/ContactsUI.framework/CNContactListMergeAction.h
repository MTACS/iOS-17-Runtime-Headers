
@interface CNContactListMergeAction : CNContactListUndoableAction {
    CNUIGroupsAndContainersSaveManager * _groupsAndContainersSaveManager;
    _TtC10ContactsUI33ContactListMergeUnifyActionHelper * _mergeUnifyActionHelper;
}

@property (nonatomic, retain) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager;
@property (nonatomic, retain) _TtC10ContactsUI33ContactListMergeUnifyActionHelper *mergeUnifyActionHelper;

+ (id)descriptorForRequiredKeys;
+ (id)log;

- (void).cxx_destruct;
- (bool)executeAction;
- (id)groupsAndContainersSaveManager;
- (id)mergeUnifyActionHelper;
- (bool)mergeWillRequireLinkingForContacts:(id)arg1;
- (void)performAction;
- (void)performUndoAction;
- (void)setGroupsAndContainersSaveManager:(id)arg1;
- (void)setMergeUnifyActionHelper:(id)arg1;
- (bool)shouldReloadListOnCompletion;
- (void)showMergeFailureAlert;

@end
