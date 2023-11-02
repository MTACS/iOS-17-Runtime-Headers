
@interface SiriMessageTypes.ASRReadyForNewTurnMessage : SiriMessageTypes.SessionMessageBase {
    void audioRecordDeviceId;
    void audioRecordType;
    void hostTime;
}

- (void).cxx_destruct;

@end
