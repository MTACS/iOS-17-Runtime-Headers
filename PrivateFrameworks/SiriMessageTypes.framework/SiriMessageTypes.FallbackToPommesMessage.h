
@interface SiriMessageTypes.FallbackToPommesMessage : SiriMessageTypes.RequestMessageBase {
    void delegatedUserDialogActs;
    void fallbackReason;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  pommesCandidateId;
    void userId;
}

- (void).cxx_destruct;

@end
