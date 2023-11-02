
@interface PXFileBackedAssetActionManager : PXAssetActionManager {
    NSMutableDictionary * _performerClassByType;
}

@property (nonatomic, readonly) NSMutableDictionary *performerClassByType;

- (void).cxx_destruct;
- (id)_selectionSnapshotForPerformerClass:(Class)arg1;
- (id)actionPerformerForActionType:(id)arg1;
- (bool)canPerformActionType:(id)arg1;
- (id)initWithSelectionManager:(id)arg1;
- (id)performerClassByType;
- (bool)supportsActionType:(id)arg1;

@end
