
@interface MPCSuzeLeaseSession : NSObject {
    ICSuzeLeaseSession * _icSuzeLeaseSession;
}

@property (nonatomic, readonly) ICSuzeLeaseSession *icSuzeLeaseSession;

- (void).cxx_destruct;
- (void)beginAutomaticallyRefreshingLease;
- (void)endAutomaticallyRefreshingLease;
- (id)icSuzeLeaseSession;
- (id)initWithICSuzeLeaseSession:(id)arg1;

@end
