
@interface BRCDataOrDocsScopeGatherer : NSObject {
    id /* block */  _gatherReply;
    BRCItemGlobalID * _gatheredChildrenItemGlobalID;
    NSMutableArray * _gatheringAppLibraries;
    NSString * _gatheringNamePrefix;
    unsigned long long  _gatheringRankMax;
    unsigned long long  _gatheringRankMin;
    bool  _includesDeadItems;
    bool  _invalidated;
    unsigned long long  _lastSentRank;
    BRCNotificationPipe * _pipe;
    BRCAccountSession * _session;
}

@property (nonatomic, retain) BRCItemGlobalID *gatheredChildrenItemGlobalID;

- (void).cxx_destruct;
- (id /* block */)_popGatherReply;
- (void)dealloc;
- (void)done;
- (void)gatherWithBatchSize:(long long)arg1 completion:(id /* block */)arg2;
- (id)gatheredChildrenItemGlobalID;
- (id)initWithNotificationPipe:(id)arg1 appLibraries:(id)arg2 startingRank:(unsigned long long)arg3 maxRank:(unsigned long long)arg4 withDeadItems:(bool)arg5 gatherReply:(id /* block */)arg6;
- (void)invalidate;
- (void)setGatheredChildrenItemGlobalID:(id)arg1;

@end
