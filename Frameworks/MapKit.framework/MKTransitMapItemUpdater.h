
@interface MKTransitMapItemUpdater : MKTransitItemReferenceDateUpdater {
    NSTimer * _dataRefreshTimer;
    bool  _lastInfoRefreshFailed;
    MKMapItem * _mapItem;
    bool  _refreshing;
    NSDate * _suggestedDataRefreshDate;
}

@property (nonatomic, retain) NSTimer *dataRefreshTimer;
@property (nonatomic) <MKTransitMapItemUpdaterDelegate> *delegate;
@property (nonatomic) bool lastInfoRefreshFailed;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (getter=isRefreshing, nonatomic) bool refreshing;
@property (nonatomic, retain) NSDate *suggestedDataRefreshDate;

- (void).cxx_destruct;
- (bool)_isInfoExpiredRelativeToDate:(id)arg1;
- (void)_processUpdatedMapItems:(id)arg1 identifier:(id)arg2 ttl:(double)arg3 error:(id)arg4;
- (void)_refreshTransitInfoIfNeeded;
- (void)_resumeDataRefreshTimer;
- (void)_scheduleDataUpdateForTransitItemAtDate:(id)arg1;
- (void)_suspendDataRefreshTimer;
- (void)_transitInfoUpdated;
- (id)dataRefreshTimer;
- (id)initWithMapItem:(id)arg1 delegate:(id)arg2;
- (bool)isRefreshing;
- (bool)isStuckWithExpiredInfoRelativeToDate:(id)arg1;
- (bool)lastInfoRefreshFailed;
- (id)mapItem;
- (void)setActive:(bool)arg1;
- (void)setDataRefreshTimer:(id)arg1;
- (void)setLastInfoRefreshFailed:(bool)arg1;
- (void)setRefreshing:(bool)arg1;
- (void)setSuggestedDataRefreshDate:(id)arg1;
- (id)suggestedDataRefreshDate;

@end
