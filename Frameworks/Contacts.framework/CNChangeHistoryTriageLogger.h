
@interface CNChangeHistoryTriageLogger : NSObject <CNChangeHistoryEventVisitorPrivate> {
    unsigned char  _defaultLogType;
    unsigned char  _destructiveLogType;
    NSObject<OS_os_log> * _os_log;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned char defaultLogType;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned char destructiveLogType;
@property (readonly) unsigned long long hash;
@property (readonly) NSObject<OS_os_log> *os_log;
@property (readonly) Class superclass;

+ (id)fetchLogger;
+ (id)log;
+ (id)saveLogger;

- (void).cxx_destruct;
- (unsigned char)defaultLogType;
- (unsigned char)destructiveLogType;
- (void)didExecuteSaveRequest;
- (void)didFetchHistoryEvents:(id)arg1 anchor:(id)arg2;
- (void)didFetchHistoryEventsCount:(long long)arg1 anchor:(id)arg2 truncated:(bool)arg3;
- (void)fetchDidFailToTranslateWithError:(id)arg1;
- (void)fetchDidFailWithError:(id)arg1;
- (id)init;
- (id)initWithOSLog:(id)arg1 defaultLogType:(unsigned char)arg2 destructiveLogType:(unsigned char)arg3;
- (id)os_log;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitAddGroupEvent:(id)arg1;
- (void)visitAddMemberToGroupEvent:(id)arg1;
- (void)visitAddSubgroupToGroupEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDeleteGroupEvent:(id)arg1;
- (void)visitDifferentMeCardEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitLinkContactsEvent:(id)arg1;
- (void)visitPreferredContactForImageEvent:(id)arg1;
- (void)visitPreferredContactForNameEvent:(id)arg1;
- (void)visitRemoveMemberFromGroupEvent:(id)arg1;
- (void)visitRemoveSubgroupFromGroupEvent:(id)arg1;
- (void)visitUnlinkContactEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;
- (void)visitUpdateGroupEvent:(id)arg1;
- (void)willExecuteSaveRequest;
- (void)willFetchHistoryWithRequest:(id)arg1;

@end
