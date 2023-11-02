
@interface SiriMessageTypes.PommesTRPCandidateMessage : SiriMessageTypes.TRPCandidateRequestMessageBase {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  pegasusId;
    void pommesResult;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  searchReason;
    void tcuId;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (void).cxx_destruct;
- (id)debugDescription;

@end
