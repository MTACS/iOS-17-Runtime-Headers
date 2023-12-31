
@interface NTNewsTodayResultsSourceFetchHelper : NSObject {
    NSMutableDictionary * _remainingSectionsBySectionQueueDescriptors;
    NSMutableArray * _sectionQueueDescriptors;
}

@property (nonatomic, retain) NSMutableDictionary *remainingSectionsBySectionQueueDescriptors;
@property (nonatomic, retain) NSMutableArray *sectionQueueDescriptors;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSectionQueueDescriptors:(id)arg1;
- (id)remainingSectionsBySectionQueueDescriptors;
- (void)removeSectionDescriptors:(id)arg1;
- (id)sectionDescriptorsAtHeadsOfQueues;
- (id)sectionQueueDescriptors;
- (void)setRemainingSectionsBySectionQueueDescriptors:(id)arg1;
- (void)setSectionQueueDescriptors:(id)arg1;

@end
