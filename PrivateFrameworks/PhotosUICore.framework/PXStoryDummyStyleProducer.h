
@interface PXStoryDummyStyleProducer : NSObject <PXStoryStyleProducer> {
    id /* block */  _styleConfiguration;
}

@property (nonatomic, readonly) id /* block */ styleConfiguration;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStyleConfiguration:(id /* block */)arg1;
- (id /* block */)styleConfiguration;
- (id)styleWithCustomColorGradeKind:(long long)arg1 originalColorGradeCategory:(id)arg2 songResource:(id)arg3 cueSource:(id)arg4 autoEditDecisionList:(id)arg5 styleOptions:(struct { unsigned long long x1; bool x2; })arg6 isCustomized:(bool)arg7;

@end
