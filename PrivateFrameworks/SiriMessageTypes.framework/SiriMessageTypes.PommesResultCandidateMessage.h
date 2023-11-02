
@interface SiriMessageTypes.PommesResultCandidateMessage : SiriMessageTypes.ResultCandidateRequestMessageBase {
    void error;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  pegasusId;
    void pommesResponse;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  searchReason;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (void).cxx_destruct;
- (id)debugDescription;

@end
