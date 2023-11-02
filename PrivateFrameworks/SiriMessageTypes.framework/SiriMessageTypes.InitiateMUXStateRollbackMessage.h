
@interface SiriMessageTypes.InitiateMUXStateRollbackMessage : SiriMessageTypes.SessionMessageBase {
    void originalRequestId;
    void rollbackRequestId;
    void userId;
}

- (void).cxx_destruct;

@end
