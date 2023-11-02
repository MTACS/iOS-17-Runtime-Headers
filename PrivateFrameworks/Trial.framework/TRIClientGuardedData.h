
@interface TRIClientGuardedData : NSObject {
    TRIExcessiveStaleFactorsUsageTimer * excessiveStaleFactorUsageTimer;
    bool  isLazyInitComplete;
    NSMutableDictionary * namespaceCallbacks;
    NSMutableDictionary * namespaceUpdateHandlerTokens;
    TRITrackingId * trackingId;
}

- (void).cxx_destruct;

@end
