
@interface GroupActivities.PlaybackSyncer : _TtCs12_SwiftObject {
    void avMediumDelegate;
    void cancellables;
    void coordinator;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  defaultTransportStateTakeoverInterval;
    void hasReceivedTransportState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  initiatorTransportStateTakeoverInterval;
    void link;
    void localParticipantState;
    void messageDecoder;
    void messageEncoder;
    void queue;
    void reloadCompletion;
    void syncerDelegate;
    void transportControlStates;
    void transportStateTakeoverWorkItem;
    void waitingForCatchupResponseFromParticipants;
}

@end
