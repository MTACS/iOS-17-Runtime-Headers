
@protocol PGGraphMemoryProtocol <NSObject>

@required

- (bool)generatedWithFallbackRequirements;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategory;
- (PGGraphFeatureNodeCollection *)memoryFeatureNodesInGraph:(PGGraph *)arg1;
- (PGGraphMomentNodeCollection *)memoryMomentNodes;

@end
