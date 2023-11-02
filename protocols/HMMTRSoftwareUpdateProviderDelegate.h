
@protocol HMMTRSoftwareUpdateProviderDelegate <NSObject>

@required

- (void)applyUpdateWithPairing:(void *)arg1 requestParams:(void *)arg2 queue:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: HMMTRPairing *, HMMTRSoftwareUpdateProviderApplyUpdateRequestParams *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMMTRSoftwareUpdateProviderApplyUpdateResponseParams *, NSError *, void*
- (void)notifyUpdateWithPairing:(void *)arg1 params:(void *)arg2 queue:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: HMMTRPairing *, HMMTRSoftwareUpdateProviderNotifyUpdateParams *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)queryImageWithPairing:(void *)arg1 requestParams:(void *)arg2 queue:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: HMMTRPairing *, HMMTRSoftwareUpdateProviderQueryImageRequestParams *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMMTRSoftwareUpdateProviderQueryResponseParams *, NSError *, void*

@end
