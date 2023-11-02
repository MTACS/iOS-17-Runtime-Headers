
@protocol PGMemoryNodeProtocol <PGGraphMemoryProtocol>

@required

- (PGGraphFeatureNodeCollection *)memoryFeatureNodes;
- (NSString *)uniqueMemoryIdentifier;

@end
