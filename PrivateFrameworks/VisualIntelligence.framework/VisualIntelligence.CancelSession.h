
@interface VisualIntelligence.CancelSession : NSObject <VIQueryHandling> {
    void _isCanceled;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void lock;
    void onCancels;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)init;

@end
