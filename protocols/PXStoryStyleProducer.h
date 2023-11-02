
@protocol PXStoryStyleProducer

@required

- (<PXStoryStyle> *)styleWithCustomColorGradeKind:(long long)arg1 originalColorGradeCategory:(NSString *)arg2 songResource:(id <PXStorySongResource>)arg3 cueSource:(id <PXAudioCueSource>)arg4 autoEditDecisionList:(id <PXStoryAutoEditDecisionList>)arg5 styleOptions:(struct { unsigned long long x1; bool x2; })arg6 isCustomized:(bool)arg7;

@end
