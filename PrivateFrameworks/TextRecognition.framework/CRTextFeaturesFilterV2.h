
@interface CRTextFeaturesFilterV2 : NSObject <CRTextFeaturesFiltering> {
    <CRSingleTextFeatureFiltering> * _chineseLowConfidenceFilter;
    <CRSingleTextFeatureFiltering> * _japaneseLowConfidenceFilter;
    <CRSingleTextFeatureFiltering> * _koreanLowConfidenceFilter;
    <CRSingleTextFeatureFiltering> * _latinLowConfidenceFilter;
    NSString * _preferredLocale;
}

@property (retain) <CRSingleTextFeatureFiltering> *chineseLowConfidenceFilter;
@property (retain) <CRSingleTextFeatureFiltering> *japaneseLowConfidenceFilter;
@property (retain) <CRSingleTextFeatureFiltering> *koreanLowConfidenceFilter;
@property (retain) <CRSingleTextFeatureFiltering> *latinLowConfidenceFilter;
@property (retain) NSString *preferredLocale;

- (void).cxx_destruct;
- (double)_distanceFromPoint1:(struct CGPoint { double x1; double x2; })arg1 toPoint2:(struct CGPoint { double x1; double x2; })arg2;
- (id)_filterForLocale:(id)arg1;
- (id)_groupGeometriesForRegions:(id)arg1;
- (struct CGPoint { double x1; double x2; })_pointInImageSpace:(struct CGPoint { double x1; double x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)chineseLowConfidenceFilter;
- (id)filterBlocks:(id)arg1;
- (id)filterLineRegions:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)japaneseLowConfidenceFilter;
- (id)koreanLowConfidenceFilter;
- (id)latinLowConfidenceFilter;
- (id)preferredLocale;
- (void)setChineseLowConfidenceFilter:(id)arg1;
- (void)setJapaneseLowConfidenceFilter:(id)arg1;
- (void)setKoreanLowConfidenceFilter:(id)arg1;
- (void)setLatinLowConfidenceFilter:(id)arg1;
- (void)setPreferredLocale:(id)arg1;

@end
