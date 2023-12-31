
@interface MessageListViewControllerState : NSObject {
    bool  _canShowReadLaterDate;
    bool  _containsArchiveMailbox;
    bool  _containsDraftsMailbox;
    bool  _containsDraftsOrOutbox;
    bool  _containsFollowUpMailbox;
    bool  _containsInbox;
    bool  _containsOnlyInboxScope;
    bool  _containsOutbox;
    bool  _containsReadLaterMailbox;
    bool  _containsSendLaterMailbox;
    bool  _containsSent;
    bool  _containsSmartMailbox;
    bool  _containsTrashMailbox;
    bool  _didAlertOnBlankCell;
    bool  _didRecordTailspin;
    bool  _isCompact;
    bool  _isEditing;
    bool  _isOutgoingMailbox;
    bool  _isSearch;
    bool  _isUnifiedMailbox;
    bool  _shouldDisplayUnreadAndVIP;
    bool  _useSplitViewStyling;
}

@property (nonatomic) bool canShowReadLaterDate;
@property (nonatomic) bool containsArchiveMailbox;
@property (nonatomic) bool containsDraftsMailbox;
@property (nonatomic) bool containsDraftsOrOutbox;
@property (nonatomic) bool containsFollowUpMailbox;
@property (nonatomic) bool containsInbox;
@property (nonatomic) bool containsOnlyInboxScope;
@property (nonatomic) bool containsOutbox;
@property (nonatomic) bool containsReadLaterMailbox;
@property (nonatomic) bool containsSendLaterMailbox;
@property (nonatomic) bool containsSent;
@property (nonatomic) bool containsSmartMailbox;
@property (nonatomic) bool containsTrashMailbox;
@property (nonatomic) bool didAlertOnBlankCell;
@property (nonatomic) bool didRecordTailspin;
@property (nonatomic) bool isCompact;
@property (nonatomic) bool isEditing;
@property (nonatomic) bool isOutgoingMailbox;
@property (nonatomic) bool isSearch;
@property (nonatomic) bool isUnifiedMailbox;
@property (nonatomic) bool shouldDisplayUnreadAndVIP;
@property (nonatomic) bool useSplitViewStyling;

- (bool)canShowReadLaterDate;
- (bool)containsArchiveMailbox;
- (bool)containsDraftsMailbox;
- (bool)containsDraftsOrOutbox;
- (bool)containsFollowUpMailbox;
- (bool)containsInbox;
- (bool)containsOnlyInboxScope;
- (bool)containsOutbox;
- (bool)containsReadLaterMailbox;
- (bool)containsSendLaterMailbox;
- (bool)containsSent;
- (bool)containsSmartMailbox;
- (bool)containsTrashMailbox;
- (bool)didAlertOnBlankCell;
- (bool)didRecordTailspin;
- (bool)isCompact;
- (bool)isEditing;
- (bool)isOutgoingMailbox;
- (bool)isSearch;
- (bool)isUnifiedMailbox;
- (void)setCanShowReadLaterDate:(bool)arg1;
- (void)setContainsArchiveMailbox:(bool)arg1;
- (void)setContainsDraftsMailbox:(bool)arg1;
- (void)setContainsDraftsOrOutbox:(bool)arg1;
- (void)setContainsFollowUpMailbox:(bool)arg1;
- (void)setContainsInbox:(bool)arg1;
- (void)setContainsOnlyInboxScope:(bool)arg1;
- (void)setContainsOutbox:(bool)arg1;
- (void)setContainsReadLaterMailbox:(bool)arg1;
- (void)setContainsSendLaterMailbox:(bool)arg1;
- (void)setContainsSent:(bool)arg1;
- (void)setContainsSmartMailbox:(bool)arg1;
- (void)setContainsTrashMailbox:(bool)arg1;
- (void)setDidAlertOnBlankCell:(bool)arg1;
- (void)setDidRecordTailspin:(bool)arg1;
- (void)setIsCompact:(bool)arg1;
- (void)setIsEditing:(bool)arg1;
- (void)setIsOutgoingMailbox:(bool)arg1;
- (void)setIsSearch:(bool)arg1;
- (void)setIsUnifiedMailbox:(bool)arg1;
- (void)setShouldDisplayUnreadAndVIP:(bool)arg1;
- (void)setUseSplitViewStyling:(bool)arg1;
- (bool)shouldDisplayUnreadAndVIP;
- (void)updateWithMailboxes:(id)arg1;
- (bool)useSplitViewStyling;

@end
