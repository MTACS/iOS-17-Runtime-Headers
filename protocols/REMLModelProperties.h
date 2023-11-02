
@protocol REMLModelProperties <REExportedInterface>

@required

- (bool)allowsExploreExploit;
- (float)averagePrediction;
- (float)exploreExploitModulator;
- (unsigned long long)featureBitWidth;
- (long long)getNumberOfCoordinates;
- (unsigned long long)maxFeatureCount;
- (NSString *)name;
- (float)normalizedEntropy;
- (float)priorMean;
- (float)simulationExploreExploitModulator;
- (unsigned long long)totalExampleCount;
- (unsigned long long)totalPositiveCount;

@end
