
@interface PXStoryConcreteCompanionTimeline : NSObject <PXStoryCompanionTimeline> {
    long long  _colorGradeKind;
    <PXStoryColorGradingRepository> * _colorGradingRepository;
    <PXStoryTimeline> * _timeline;
}

@property (nonatomic, readonly) long long colorGradeKind;
@property (nonatomic, readonly) <PXStoryCompanionColorEffect> *colorGradingEffect;
@property (nonatomic, readonly) <PXStoryColorGradingRepository> *colorGradingRepository;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly) long long numberOfSegments;
@property (nonatomic, readonly) <PXStoryTimeline> *timeline;

- (void).cxx_destruct;
- (long long)colorGradeKind;
- (id)colorGradingEffect;
- (id)colorGradingRepository;
- (id)diagnosticDescription;
- (id)init;
- (id)initWithTimeline:(id)arg1 colorGradeKind:(long long)arg2 colorGradingRepository:(id)arg3;
- (long long)numberOfSegments;
- (id)segmentAtIndex:(long long)arg1;
- (id)timeline;

@end
