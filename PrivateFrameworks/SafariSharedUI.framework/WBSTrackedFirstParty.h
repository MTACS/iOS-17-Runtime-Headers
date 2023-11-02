
@interface WBSTrackedFirstParty : WBSTrackingCapableFirstParty {
    NSArray * _blockedTrackers;
    NSArray * _preventedTrackers;
}

@property (nonatomic, copy) NSArray *blockedTrackers;
@property (nonatomic, copy) NSArray *preventedTrackers;
@property (nonatomic, readonly, copy) NSArray *trackers;

- (void).cxx_destruct;
- (id)blockedTrackers;
- (id)initWithDomain:(id)arg1;
- (id)initWithDomain:(id)arg1 blockedTrackers:(id)arg2 preventedTrackers:(id)arg3;
- (id)preventedTrackers;
- (void)setBlockedTrackers:(id)arg1;
- (void)setPreventedTrackers:(id)arg1;
- (id)trackers;

@end
