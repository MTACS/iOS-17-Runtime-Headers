
@interface XRWaitingRoom : XRMobileAgentQueueStop {
    bool  _abandoned;
    NSMutableSet * _activeTeams;
    id  _ownerID;
    NSMutableSet * _teamMembersWaiting;
    NSMutableArray * _unaffiliatedVisitorsWaiting;
    XRMobileAgent<XRMobileAgentOwner> * _visitingOwner;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)_escortAgentToExit:(id)arg1 withTicket:(id)arg2;
- (bool)_holdReceivedAgent:(id)arg1 ticket:(id)arg2;
- (void)_prepareAgentToExecute:(id)arg1 withTicket:(id)arg2;
- (void)abandon;
- (int)agentStopDiagnosticsTypeCode;
- (id)initWithDispatchQueue:(id)arg1 funnelTarget:(id)arg2;
- (id)initWithOwner:(id)arg1 dispatchQueue:(id)arg2;
- (id)ownerTicketForAgent:(id)arg1 leaveWhenEmpty:(bool)arg2;
- (void)setupMeetingWithOwner:(id)arg1 worker:(id)arg2 mode:(id)arg3;
- (void)setupMeetingWithOwner:(id)arg1 worker:(id)arg2 team:(id)arg3 mode:(id)arg4;
- (void)setupOwnerVisit:(id)arg1 leaveWhenEmpty:(bool)arg2 mode:(id)arg3;
- (void)setupOwnerVisit:(id)arg1 mode:(id)arg2;
- (id)visitorTicketForAgent:(id)arg1 team:(id)arg2;

@end
