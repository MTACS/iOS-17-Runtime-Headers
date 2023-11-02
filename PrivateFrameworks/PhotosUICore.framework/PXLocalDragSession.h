
@interface PXLocalDragSession : NSObject {
    <PXLocalDragSessionDelegate> * _delegate;
    <UIDragSession> * _dragSession;
    NSSet * _draggedAssetReferences;
    PXAssetCollectionActionPerformer * _dropActionPerformer;
    unsigned long long  _dropOperation;
    <UIDropSession> * _dropSession;
    PXAssetReference * _dropTargetAssetReference;
    NSSet * _excludedAssets;
    PXAssetReference * _hitAssetReference;
    PXVelocityNumberFilter * _horizontalVelocity;
    long long  _identifier;
    bool  _isDragSessionActive;
    bool  _isDropActiveInsideView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollViewLocation;
    PXVelocityNumberFilter * _verticalVelocity;
}

@property (nonatomic) <PXLocalDragSessionDelegate> *delegate;
@property (nonatomic) <UIDragSession> *dragSession;
@property (nonatomic, retain) NSSet *draggedAssetReferences;
@property (nonatomic, retain) PXAssetCollectionActionPerformer *dropActionPerformer;
@property (nonatomic) unsigned long long dropOperation;
@property (nonatomic) <UIDropSession> *dropSession;
@property (nonatomic, retain) PXAssetReference *dropTargetAssetReference;
@property (nonatomic, retain) NSSet *excludedAssets;
@property (nonatomic, retain) PXAssetReference *hitAssetReference;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic) bool isDragSessionActive;
@property (nonatomic) bool isDropActiveInsideView;
@property (nonatomic) struct CGPoint { double x1; double x2; } scrollViewLocation;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } velocity;

- (void).cxx_destruct;
- (void)_noteChanged:(SEL)arg1;
- (id)delegate;
- (id)dragSession;
- (id)draggedAssetReferences;
- (id)dropActionPerformer;
- (unsigned long long)dropOperation;
- (id)dropSession;
- (id)dropTargetAssetReference;
- (id)excludedAssets;
- (id)hitAssetReference;
- (id)horizontalVelocity;
- (long long)identifier;
- (id)init;
- (bool)isDragSessionActive;
- (bool)isDropActiveInsideView;
- (struct CGPoint { double x1; double x2; })scrollViewLocation;
- (void)setDelegate:(id)arg1;
- (void)setDragSession:(id)arg1;
- (void)setDraggedAssetReferences:(id)arg1;
- (void)setDropActionPerformer:(id)arg1;
- (void)setDropOperation:(unsigned long long)arg1;
- (void)setDropSession:(id)arg1;
- (void)setDropTargetAssetReference:(id)arg1;
- (void)setExcludedAssets:(id)arg1;
- (void)setHitAssetReference:(id)arg1;
- (void)setIsDragSessionActive:(bool)arg1;
- (void)setIsDropActiveInsideView:(bool)arg1;
- (void)setScrollViewLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateWithDataSource:(id)arg1;
- (struct CGPoint { double x1; double x2; })velocity;
- (id)verticalVelocity;

@end
