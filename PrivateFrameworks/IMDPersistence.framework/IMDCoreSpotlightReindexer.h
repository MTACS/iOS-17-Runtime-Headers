
@interface IMDCoreSpotlightReindexer : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  deferralTime;
    void handles;
    void index;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  messageAge;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithHandles:(id)arg1 batchDeferralTime:(long long)arg2 messageAge:(double)arg3 index:(id)arg4;
- (void)reindex;

@end
