
@interface _TtC11SessionCoreP33_F0FA238C64D38D6BA2E43F90C1B188B06Client : NSObject <ACActivityInputXPCServer> {
    void activityAuthorizer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  backoffBudget;
    void backoffPolicy;
    void connection;
    void delegate;
    void ephemeralActivityIdentifiers;
    void pushServer;
    void queue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  requester;
    void targetQueue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  uuid;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)endActivityWithIdentifier:(id)arg1 payload:(id)arg2 options:(id)arg3;
- (id)init;
- (void)mockPushForActivityIdentifier:(id)arg1 token:(id)arg2 processIdentifier:(id)arg3 environmentName:(id)arg4 payload:(id)arg5 pushPriority:(id)arg6 completionHandler:(id /* block */)arg7;
- (id)requestActivityWithRequest:(id)arg1 error:(id*)arg2;
- (void)updateActivityWithIdentifier:(id)arg1 payload:(id)arg2;

@end
