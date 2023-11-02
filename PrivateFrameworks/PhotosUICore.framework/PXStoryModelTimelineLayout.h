
@interface PXStoryModelTimelineLayout : PXStoryTimelineLayout <PXChangeObserver> {
    PXStoryModel * _model;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXStoryModel *model;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureClipLayout:(id)arg1;
- (void)didUpdate;
- (void)handleModelChange:(unsigned long long)arg1;
- (id)init;
- (id)initWithModel:(id)arg1;
- (void)invalidateClipsCornerRadius;
- (void)invalidateDisplayedRect;
- (void)invalidateDisplayedTimeRange;
- (void)invalidateDisplayedTimeline;
- (void)invalidatePresentedTimelineTransition;
- (id)model;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)update;
- (void)updateClipsCornerRadius;
- (void)updateDisplayedTimeRange;
- (void)updateDisplayedTimeline;
- (void)updateDisplayedTimelineRect;
- (void)updatePresentedTimelineTransition;
- (void)willUpdate;

@end
