
@protocol REMLModelManagerProperties <REExportedInterface>

@required

- (REContentRanker *)contentRanker;
- (REMLModel *)model;
- (unsigned long long)modelVersionNumber;
- (NSArray *)orderedFeatures;
- (bool)supportsContentRanking;

@end
