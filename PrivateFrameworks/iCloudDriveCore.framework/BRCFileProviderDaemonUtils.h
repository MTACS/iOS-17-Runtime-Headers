
@interface BRCFileProviderDaemonUtils : NSObject {
    bool  _inSyncBubble;
    bool  _isFPFS;
}

- (id)initWithSyncBubble:(bool)arg1 isFPFS:(bool)arg2;
- (bool)waitForFPToBeReadyToAcceptXPCWithError:(id*)arg1;

@end
