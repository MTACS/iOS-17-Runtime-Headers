
@interface PXSwipeSelectionManager : NSObject <PXAutoScrollerDelegate, PXSectionedDataSourceManagerObserver, UIMultiSelectInteractionDelegate> {
    PXUIAutoScroller * __autoScroller;
    long long  __currentDataSourceIdentifier;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  __currentIndexPath;
    id  __pausingChangesToken;
    PXIndexPathSet * __selectedIndexPathsBeforeSwipe;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  __startingIndexPath;
    <PXSwipeSelectionManagerDelegate> * _delegate;
    struct { 
        bool respondsToItemIndexPathAtLocation; 
        bool respondsToItemIndexPathClosestLeadingLocation; 
        bool respondsToItemIndexPathClosestAboveLocation; 
        bool respondsToShouldSelectItemAtIndexPath; 
        bool respondsToShouldBeginSelectionAtLocation; 
        bool respondsToShouldAutomaticallyTransitionToMultiSelectModeAtPoint; 
        bool respondsToAutomaticallyTransitionToMultiSelectMode; 
        bool respondsToIndexPathSetFromIndexPathToIndexPath; 
        bool respondsToExtendSelectionInDirection; 
        bool respondsToDidAutoScroll; 
    }  _delegateFlags;
    UIMultiSelectInteraction * _multiSelectInteraction;
    struct { 
        bool selectedIndexPaths; 
    }  _needsUpdateFlags;
    UIScrollView * _scrollView;
    PXSectionedSelectionManager * _selectionManager;
    unsigned long long  _state;
}

@property (nonatomic, readonly) PXUIAutoScroller *_autoScroller;
@property (setter=_setCurrentDataSourceIdentifier:, nonatomic) long long _currentDataSourceIdentifier;
@property (setter=_setCurrentIndexPath:, nonatomic) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } _currentIndexPath;
@property (setter=_setPausingChangesToken:, nonatomic, retain) id _pausingChangesToken;
@property (setter=_setSelectedIndexPathsBeforeSwipe:, nonatomic, retain) PXIndexPathSet *_selectedIndexPathsBeforeSwipe;
@property (setter=_setStartingIndexPath:, nonatomic) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } _startingIndexPath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXSwipeSelectionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *gesturesForFailureRequirements;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *keyCommandsForSelectionExtension;
@property (nonatomic, readonly) UIMultiSelectInteraction *multiSelectInteraction;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (setter=_setState:, nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id targetForKeyCommands;

- (void).cxx_destruct;
- (id)_autoScroller;
- (void)_beginSelectionFromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (long long)_currentDataSourceIdentifier;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_currentIndexPath;
- (void)_endSelection;
- (void)_invalidateSelectedIndexPaths;
- (bool)_isSelecting;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_itemIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_itemIndexPathClosestAboveLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_itemIndexPathClosestLeadingLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_pausingChangesToken;
- (id)_selectedIndexPathsBeforeSwipe;
- (void)_setCurrentDataSourceIdentifier:(long long)arg1;
- (void)_setCurrentIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)_setPausingChangesToken:(id)arg1;
- (void)_setSelectedIndexPathsBeforeSwipe:(id)arg1;
- (void)_setStartingIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)_setState:(unsigned long long)arg1;
- (bool)_shouldBeginMultiSelectAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_startingIndexPath;
- (void)_updateSelectedIndexPaths;
- (void)_updateSelectionWithHitIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 leadingClosestIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 aboveClosestIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3;
- (void)_updateWithDataSource:(id)arg1 changeHistory:(id)arg2;
- (void)autoScroller:(id)arg1 didAutoscrollWithTimestamp:(double)arg2;
- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(bool)arg1;
- (id)delegate;
- (void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)didEndMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)gesturesForFailureRequirements;
- (id)init;
- (id)initWithSelectionManager:(id)arg1 scrollView:(id)arg2;
- (bool)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint { double x1; double x2; })arg2 withVelocity:(struct CGPoint { double x1; double x2; })arg3;
- (bool)isInMultiSelectMode;
- (id)keyCommandsForSelectionExtension;
- (id)multiSelectInteraction;
- (void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)multiSelectInteraction:(id)arg1 extendSelectionInDirection:(unsigned long long)arg2;
- (void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)removeFromView;
- (id)scrollView;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (id)selectionManager;
- (void)setDelegate:(id)arg1;
- (bool)shouldAllowSelectionExtensionAtIndexPath:(id)arg1;
- (bool)shouldAllowSelectionExtensionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldBeginMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 withVelocity:(struct CGPoint { double x1; double x2; })arg3;
- (unsigned long long)state;
- (bool)supportsKeyboardSelectionExtension;
- (bool)supportsMultiSelectInteraction:(id)arg1;
- (id)targetForKeyCommands;
- (void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;

@end
