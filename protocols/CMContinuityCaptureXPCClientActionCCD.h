
@protocol CMContinuityCaptureXPCClientActionCCD <NSObject>

@required

- (void)disconnectSession;
- (void)pauseSessionForEvent:(long long)arg1;
- (void)prepareForPullConversation:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)requestContinuityCaptureUIConfiguration:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CMContinuityCaptureUIConfiguration *, void*
- (void)resumeStreamingForEvent:(long long)arg1;
- (void)skipPlacementStep;

@end
