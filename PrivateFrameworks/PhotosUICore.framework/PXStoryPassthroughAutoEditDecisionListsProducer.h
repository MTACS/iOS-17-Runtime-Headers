
@interface PXStoryPassthroughAutoEditDecisionListsProducer : NSObject <PXStoryAutoEditDecisionListsProducer> {
    NSArray * _autoEditDecisionLists;
}

@property (nonatomic, readonly) NSArray *autoEditDecisionLists;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXStoryAutoEditMomentsProvider *diagnosticsMomentsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)autoEditDecisionLists;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (id)diagnosticErrorsByComponentForHUDType:(long long)arg1;
- (id)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize { double x1; double x2; })arg2;
- (bool)handlesDiagnosticTextForHUDType:(long long)arg1;
- (id)init;
- (id)initWithAutoEditDecisionLists:(id)arg1;
- (id)requestAutoEditDecisionListsWithOptions:(unsigned long long)arg1 songs:(id)arg2 colorGradeCategoriesBySong:(id)arg3 resultHandler:(id /* block */)arg4;
- (id)requestDefaultAutoEditDecisionListsWithColorGradeCategory:(id)arg1 options:(unsigned long long)arg2 resultHandler:(id /* block */)arg3;

@end
