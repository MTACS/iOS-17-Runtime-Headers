
@interface CopresenceCore.IDSGroupSessionProvider : NSObject <IDSGroupSessionDelegate> {
    void abcReporter;
    void delegate;
    void groupID;
    void groupSession;
    void localMember;
    void members;
    void participantIdentifier;
    void participants;
    void powerAssertion;
    void queue;
    void service;
    void state;
    void unknownParticipants;
    void virtualParticipant;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)groupSessionDidTerminate:(id)arg1;
- (void)groupSessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (id)init;
- (void)session:(id)arg1 didReceiveActiveLightweightParticipants:(id)arg2 success:(bool)arg3;
- (void)session:(id)arg1 didRegisterPluginAllocationInfo:(id)arg2;
- (void)session:(id)arg1 didUnregisterPluginAllocationInfo:(id)arg2;
- (void)session:(id)arg1 participantDidJoinGroupWithInfo:(id)arg2;
- (void)session:(id)arg1 participantDidLeaveGroupWithInfo:(id)arg2;
- (void)session:(id)arg1 rejectedKeyRecoveryRequestFromURI:(id)arg2 reason:(unsigned int)arg3;
- (void)sessionDidJoinGroup:(id)arg1 participantUpdate:(id)arg2 error:(id)arg3;
- (void)sessionDidLeaveGroup:(id)arg1 error:(id)arg2;
- (void)sessiondidReceiveKeyUpdate:(id)arg1;

@end
