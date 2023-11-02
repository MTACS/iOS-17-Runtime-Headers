
@interface _PXStoryDefaultStyleProducer : NSObject <PXStoryStyleProducer> {
    PXStoryConfiguration * _storyConfiguration;
    bool  _thumbnailOnly;
}

@property (nonatomic, readonly) PXStoryConfiguration *storyConfiguration;

- (void).cxx_destruct;
- (id)initWithStoryConfiguration:(id)arg1;
- (id)storyConfiguration;
- (id)styleWithCustomColorGradeKind:(long long)arg1 originalColorGradeCategory:(id)arg2 songResource:(id)arg3 cueSource:(id)arg4 autoEditDecisionList:(id)arg5 styleOptions:(struct { unsigned long long x1; bool x2; })arg6 isCustomized:(bool)arg7;

@end
