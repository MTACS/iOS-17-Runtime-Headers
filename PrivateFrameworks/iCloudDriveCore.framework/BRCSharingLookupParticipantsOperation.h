
@interface BRCSharingLookupParticipantsOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    NSMutableArray * _shareParticipants;
    NSArray * _userIdentities;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createActivity;
- (id)initWithUserIdentities:(id)arg1 session:(id)arg2;
- (void)main;

@end
