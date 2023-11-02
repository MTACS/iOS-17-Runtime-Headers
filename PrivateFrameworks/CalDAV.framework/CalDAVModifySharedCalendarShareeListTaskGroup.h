
@interface CalDAVModifySharedCalendarShareeListTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {
    NSURL * _calendarURL;
    NSMutableSet * _invalidSharees;
    bool  _muteNotifications;
    NSSet * _shareesToRemove;
    NSSet * _shareesToSet;
    NSString * _summary;
}

@property (nonatomic, retain) NSURL *calendarURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CoreDAVTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *invalidSharees;
@property bool muteNotifications;
@property (nonatomic, retain) NSSet *shareesToRemove;
@property (nonatomic, retain) NSSet *shareesToSet;
@property (nonatomic, retain) NSString *summary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)calendarURL;
- (id)generateModificationMessageBody;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)initWithShareesToSet:(id)arg1 shareesToRemove:(id)arg2 muteNotifications:(bool)arg3 summary:(id)arg4 atCalendarURL:(id)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7;
- (id)invalidSharees;
- (bool)muteNotifications;
- (void)setCalendarURL:(id)arg1;
- (void)setInvalidSharees:(id)arg1;
- (void)setMuteNotifications:(bool)arg1;
- (void)setShareesToRemove:(id)arg1;
- (void)setShareesToSet:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)shareesToRemove;
- (id)shareesToSet;
- (void)startTaskGroup;
- (id)summary;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;

@end
