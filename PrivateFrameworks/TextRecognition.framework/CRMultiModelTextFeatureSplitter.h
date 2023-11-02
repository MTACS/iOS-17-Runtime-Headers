
@interface CRMultiModelTextFeatureSplitter : NSObject {
    CRRecognizerConfiguration * _configuration;
}

@property (retain) CRRecognizerConfiguration *configuration;

+ (id)_legacySortTextRegions:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2 angle:(float)arg3 sortingWithinLine:(bool)arg4;
+ (id)_recognizerRegionsFromLineRegions:(id)arg1;
+ (bool)_regionsAreLikelyStackedTextResults:(id)arg1;

- (void).cxx_destruct;
- (id)combineRegions:(id)arg1 lineRegion:(id)arg2;
- (id)configuration;
- (void)enumerateLineRegions:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)groupLineRegions:(id)arg1;
- (id)groupLineRegions:(id)arg1 tableGroups:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)pruneAndFilterLineRegions:(id)arg1 recognitionResult:(id)arg2;
- (id)pruneLineRegions:(id)arg1 recognitionResult:(id)arg2;
- (void)setConfiguration:(id)arg1;

@end
