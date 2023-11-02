
@interface NWStatisticsDelegateBlockWrapper : NSObject <NWStatisticsManagerDelegate, NWStatisticsSourceDelegate> {
    id /* block */  _addedBlock;
    id /* block */  _countsBlock;
    id /* block */  _descriptionBlock;
    id /* block */  _eventsBlock;
    id /* block */  _removedBlock;
}

@property (copy) id /* block */ addedBlock;
@property (copy) id /* block */ countsBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ descriptionBlock;
@property (copy) id /* block */ eventsBlock;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ removedBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)addedBlock;
- (id /* block */)countsBlock;
- (id /* block */)descriptionBlock;
- (id /* block */)eventsBlock;
- (id /* block */)removedBlock;
- (void)setAddedBlock:(id /* block */)arg1;
- (void)setCountsBlock:(id /* block */)arg1;
- (void)setDescriptionBlock:(id /* block */)arg1;
- (void)setEventsBlock:(id /* block */)arg1;
- (void)setRemovedBlock:(id /* block */)arg1;
- (void)sourceDidReceiveCounts:(id)arg1;
- (void)sourceDidReceiveDescription:(id)arg1;
- (void)statisticsManager:(id)arg1 didAddSource:(id)arg2;
- (void)statisticsManager:(id)arg1 didRemoveSource:(id)arg2;

@end