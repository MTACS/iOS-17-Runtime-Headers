
@interface WBSCRDTPositionGenerator : NSObject {
    <WBSCRDTPositionGeneratorDelegate> * _delegate;
    NSDictionary * _recordNamesToPositions;
}

@property (nonatomic, readonly) <WBSCRDTPositionGeneratorDelegate> *delegate;

- (void).cxx_destruct;
- (void)_enumerateRecordNamesAfterRecordWithName:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_enumerateRecordNamesBeforeRecordWithName:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)_generatePositionBetweenPosition:(id)arg1 andPosition:(id)arg2;
- (id)_generatePositionsForStrides:(id)arg1;
- (id)_positionForRecordName:(id)arg1;
- (id)_stridesForSiblingRecords:(id)arg1;
- (id)delegate;
- (void)generatePositionsForChildRecordNamesGroupedByParentFolders:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)positionForBookmarkWithRecordName:(id)arg1;

@end
