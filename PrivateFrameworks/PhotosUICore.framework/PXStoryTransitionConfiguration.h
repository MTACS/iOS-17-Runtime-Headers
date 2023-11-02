
@interface PXStoryTransitionConfiguration : NSObject {
    PXGEntityManager * _entityManager;
    <PXStoryTransitionSource> * _source;
    <PXStoryTimeline> * _timeline;
    <PXStoryTimelineSpec> * _timelineSpec;
    PXStoryTransitionModel * _transitionModel;
}

@property (nonatomic, retain) PXGEntityManager *entityManager;
@property (nonatomic, retain) <PXStoryTransitionSource> *source;
@property (nonatomic, retain) <PXStoryTimeline> *timeline;
@property (nonatomic, retain) <PXStoryTimelineSpec> *timelineSpec;
@property (nonatomic, retain) PXStoryTransitionModel *transitionModel;

- (void).cxx_destruct;
- (id)entityManager;
- (void)setEntityManager:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setTimeline:(id)arg1;
- (void)setTimelineSpec:(id)arg1;
- (void)setTransitionModel:(id)arg1;
- (id)source;
- (id)timeline;
- (id)timelineSpec;
- (id)transitionModel;

@end
