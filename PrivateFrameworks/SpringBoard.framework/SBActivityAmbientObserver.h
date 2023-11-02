
@interface SBActivityAmbientObserver : NSObject <SBActivityObserver> {
    NSMutableOrderedSet * _activeActivityItems;
    <SBActivityAmbientObserverDelegate> * _delegate;
    NSMutableOrderedSet * _pendingItems;
}

@property (nonatomic, retain) NSMutableOrderedSet *activeActivityItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBActivityAmbientObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPendingItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBActivityItem *nextPendingItem;
@property (nonatomic, retain) NSMutableOrderedSet *pendingItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_sortActivityItems;
- (id)activeActivityItems;
- (void)activityDidDismiss:(id)arg1;
- (void)activityDidEnd:(id)arg1;
- (void)activityDidStart:(id)arg1;
- (void)activityProminenceChanged:(bool)arg1 item:(id)arg2;
- (void)addOverlaysForOngoingActivitiesIfNecessary;
- (void)addPendingItem:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)dismissAlert:(id)arg1;
- (bool)hasPendingItem;
- (id)init;
- (bool)isActiveActivityItem:(id)arg1;
- (id)nextPendingItem;
- (id)pendingItems;
- (void)presentAlert:(id)arg1;
- (void)removePendingItem:(id)arg1;
- (void)setActiveActivityItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPendingItems:(id)arg1;
- (bool)shouldHandleActivityItem:(id)arg1;

@end
