
@interface CKSceneDelegateState : NSObject <NSSecureCoding> {
    bool  _composingNewMessage;
    NSDate * _date;
    unsigned long long  _filterMode;
    NSString * _groupID;
    bool  _showingInbox;
    NSArray * _unreadLastMessages;
}

@property (nonatomic) bool composingNewMessage;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) unsigned long long filterMode;
@property (nonatomic, retain) NSString *groupID;
@property (nonatomic) bool showingInbox;
@property (nonatomic, retain) NSArray *unreadLastMessages;

+ (id)stateFromIsComposingNewMessage:(bool)arg1 messageHasContent:(bool)arg2 isShowingBlankTranscript:(bool)arg3 isControllerCollapsed:(bool)arg4 isTopVCChatNavigationController:(bool)arg5 conversation:(id)arg6 filterMode:(unsigned long long)arg7 isShowingInbox:(bool)arg8 unreadMessages:(id)arg9;
+ (bool)supportsSecureCoding;
+ (id)unarchivingClasses;

- (void).cxx_destruct;
- (bool)composingNewMessage;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)filterMode;
- (id)groupID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnreadMessages:(id)arg1 groupID:(id)arg2 composingNewMessage:(bool)arg3 filterMode:(unsigned long long)arg4 showingInbox:(bool)arg5;
- (void)setComposingNewMessage:(bool)arg1;
- (void)setDate:(id)arg1;
- (void)setFilterMode:(unsigned long long)arg1;
- (void)setGroupID:(id)arg1;
- (void)setShowingInbox:(bool)arg1;
- (void)setUnreadLastMessages:(id)arg1;
- (bool)showingInbox;
- (id)unreadLastMessages;

@end
