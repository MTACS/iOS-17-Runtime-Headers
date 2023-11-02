
@interface NUPaywallEventData : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  articleData;
    void channel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  feedData;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  groupData;
    void qToken;
    void referral;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  viewData;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithPaywallViewData:(id)arg1 headline:(id)arg2 channel:(id)arg3 feed:(id)arg4 paywallGroupData:(id)arg5 referral:(id)arg6 qToken:(id)arg7;

@end
