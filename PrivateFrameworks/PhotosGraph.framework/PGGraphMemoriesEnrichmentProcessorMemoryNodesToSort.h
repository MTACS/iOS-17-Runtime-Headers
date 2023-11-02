
@interface PGGraphMemoriesEnrichmentProcessorMemoryNodesToSort : NSObject {
    NSArray * _memoryNodesWithEphemeralMemoryLastEnrichmentDate;
    NSArray * _memoryNodesWithoutEphemeralMemory;
    NSArray * _memoryNodesWithoutEphemeralMemoryLastEnrichmentDate;
}

@property (nonatomic, retain) NSArray *memoryNodesWithEphemeralMemoryLastEnrichmentDate;
@property (nonatomic, retain) NSArray *memoryNodesWithoutEphemeralMemory;
@property (nonatomic, retain) NSArray *memoryNodesWithoutEphemeralMemoryLastEnrichmentDate;

- (void).cxx_destruct;
- (id)init;
- (id)memoryNodesWithEphemeralMemoryLastEnrichmentDate;
- (id)memoryNodesWithoutEphemeralMemory;
- (id)memoryNodesWithoutEphemeralMemoryLastEnrichmentDate;
- (void)setMemoryNodesWithEphemeralMemoryLastEnrichmentDate:(id)arg1;
- (void)setMemoryNodesWithoutEphemeralMemory:(id)arg1;
- (void)setMemoryNodesWithoutEphemeralMemoryLastEnrichmentDate:(id)arg1;

@end
