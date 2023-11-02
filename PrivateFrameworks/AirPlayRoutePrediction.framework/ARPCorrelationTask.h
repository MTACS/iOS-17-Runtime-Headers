
@interface ARPCorrelationTask : NSObject {
    NSString * _file;
    <_DKKnowledgeQuerying> * _knowledgeStore;
}

@property (nonatomic, readonly, copy) NSString *file;
@property (nonatomic, readonly) <_DKKnowledgeQuerying> *knowledgeStore;

- (void).cxx_destruct;
- (void)execute;
- (void)execute:(id)arg1 microLocationEvents:(id)arg2;
- (id)file;
- (id)initWithCorrelationsFile:(id)arg1 knowledgeStore:(id)arg2;
- (id)knowledgeStore;
- (id)longFormVideoAppBundleIDs;
- (id)queryForMicroLocationsFromStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(unsigned long long)arg3 overlappingNowPlayingEvents:(id)arg4;

@end
