
@interface _UIDiffableSectionBoundaryMoveDetector : NSObject {
    <_UIDiffableDataSourceState> * _afterState;
    <_UIDiffableDataSourceState> * _beforeState;
    bool  _didShortCircuit;
    <_UIIdentifierDiffer> * _differ;
    NSSet * _movePairs;
}

@property (nonatomic, readonly) bool didShortCircuit;
@property (nonatomic, readonly) NSSet *movePairs;

- (void).cxx_destruct;
- (id)_computeMovePairsFoundation;
- (bool)didShortCircuit;
- (id)initWithItemDiffer:(id)arg1 beforeDataSourceState:(id)arg2 afterDataSourceState:(id)arg3;
- (id)movePairs;

@end
