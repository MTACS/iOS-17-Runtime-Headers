
@interface VideosUI.UnifiedMessagingManager : NSObject <AMSEngagementObserver> {
    void accessQueue;
    void amsURLParser;
    void engagement;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  fullorhalfSheetPromptedAt;
    void lastTabIdentifier;
    void placementIdMessageMap;
    void requestIdMessageMap;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)engagement:(id)arg1 didUpdateEngagementRequest:(id)arg2 placement:(id)arg3 serviceType:(id)arg4 completion:(id /* block */)arg5;
- (void)engagement:(id)arg1 didUpdateRequest:(id)arg2 placement:(id)arg3 serviceType:(id)arg4;
- (void)engagement:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)engagement:(id)arg1 handleEngagementRequest:(id)arg2 completion:(id /* block */)arg3;
- (id)getFullorHalfSheetPromptedAt;
- (void)handleDidBecomeActive;
- (void)handleTabBarChange:(id)arg1;
- (id)init;
- (void)markFullorHalfSheetPromptAt:(id)arg1;

@end
