
@interface PXStoryResourcesPreloadingRequest : NSObject {
    bool  _isCancelled;
    bool  _shouldIgnoreStartingSegmentIdentifier;
    <PXStorySongResource> * _songResource;
    long long  _startingSegmentIdentifier;
    <PXStoryTimeline> * _timeline;
    unsigned long long  _timelineAttributes;
}

@property bool isCancelled;
@property (nonatomic, readonly) bool shouldIgnoreStartingSegmentIdentifier;
@property (nonatomic, retain) <PXStorySongResource> *songResource;
@property (nonatomic, readonly) long long startingSegmentIdentifier;
@property (nonatomic, readonly) <PXStoryTimeline> *timeline;
@property (nonatomic, readonly) unsigned long long timelineAttributes;

- (void).cxx_destruct;
- (id)initWithTimeline:(id)arg1 timelineAttributes:(unsigned long long)arg2 startingSegmentIdentifier:(long long)arg3 shouldIgnoreStartingSegmentIdentifier:(bool)arg4;
- (bool)isCancelled;
- (void)setIsCancelled:(bool)arg1;
- (void)setSongResource:(id)arg1;
- (bool)shouldIgnoreStartingSegmentIdentifier;
- (id)songResource;
- (long long)startingSegmentIdentifier;
- (id)timeline;
- (unsigned long long)timelineAttributes;

@end
