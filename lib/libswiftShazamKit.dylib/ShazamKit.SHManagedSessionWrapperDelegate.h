
@interface ShazamKit.SHManagedSessionWrapperDelegate : NSObject <SHManagedSessionDelegate> {
    void lock;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  multipleResultsContinuation;
    void singleResultContinuation;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  spectralDataContinuation;
}

- (void).cxx_destruct;
- (void)didCalculateSpectralData:(id)arg1;
- (void)finishedManagedSession:(id)arg1;
- (id)init;

@end
