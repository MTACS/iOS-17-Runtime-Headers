
@interface VCSessionBandwidthAllocationTableStreamInfo : NSObject {
    NSMutableDictionary * _qualityIndexToTableEntry;
    NSMutableArray * _sortedEntries;
}

@property (nonatomic, readonly) NSMutableDictionary *qualityIndexToTableEntry;
@property (nonatomic, readonly) NSArray *sortedEntries;

- (bool)addTableEntry:(id)arg1;
- (void)dealloc;
- (id)entryForQualityIndex:(unsigned int)arg1;
- (id)init;
- (id)qualityIndexToTableEntry;
- (id)sortedEntries;

@end
