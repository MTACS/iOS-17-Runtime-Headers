
@interface TRIMAProvidingGuardedData : NSObject {
    bool  cancelReceived;
    TRIMAAutoAsset * currentAsset;
    bool  deferralHandlerInvalid;
    bool  didDeferDuringMADownload;
    NSMutableArray * fetchSemaphores;
}

- (void).cxx_destruct;
- (id)description;

@end
