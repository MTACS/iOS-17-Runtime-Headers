
@interface UIMultiSelectInteractionState : NSObject {
    NSArray * _allSelectedIndexPaths;
    NSIndexPath * _endIndexPath;
    unsigned long long  _ignoringSelectionChangedNotificationsCounter;
    unsigned long long  _multiselectInteractionCounter;
    NSArray * _originallySelectedIndexPaths;
    bool  _selecting;
    NSIndexPath * _startIndexPath;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
}

@property (nonatomic, copy) NSArray *allSelectedIndexPaths;
@property (nonatomic, retain) NSIndexPath *endIndexPath;
@property (nonatomic, readonly) bool ignoringSelectionChangedNotifications;
@property (getter=isInMultiselectInteraction, nonatomic, readonly) bool inMultiselectInteraction;
@property (nonatomic, copy) NSArray *originallySelectedIndexPaths;
@property (getter=isSelecting, nonatomic) bool selecting;
@property (nonatomic, retain) NSIndexPath *startIndexPath;
@property (nonatomic) struct CGPoint { double x1; double x2; } startPoint;

- (void).cxx_destruct;
- (id)allSelectedIndexPaths;
- (void)beginMultiselectInteraction;
- (void)beginSelectingWithStartingIndexPath:(id)arg1 otherSelectedIndexPaths:(id)arg2 keepCurrentSelection:(bool)arg3;
- (id)endIndexPath;
- (void)endMultiselectInteraction;
- (void)ignoreSelectionChangedNotificationsWithBlock:(id /* block */)arg1;
- (bool)ignoringSelectionChangedNotifications;
- (id)initWithCurrentSelection:(id)arg1;
- (bool)isInMultiselectInteraction;
- (bool)isSelecting;
- (id)originallySelectedIndexPaths;
- (id)pathsToDeselectForInterpolatedIndexPaths:(id)arg1 currentlySelectedIndexPaths:(id)arg2;
- (id)pathsToSelectForInterpolatedIndexPaths:(id)arg1;
- (void)setAllSelectedIndexPaths:(id)arg1;
- (void)setEndIndexPath:(id)arg1;
- (void)setOriginallySelectedIndexPaths:(id)arg1;
- (void)setSelecting:(bool)arg1;
- (void)setStartIndexPath:(id)arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)startIndexPath;
- (struct CGPoint { double x1; double x2; })startPoint;
- (bool)stillValidForSelectedIndexPaths:(id)arg1;
- (void)updateStateWithDifferenceFromCurrentSelection:(id)arg1;
- (void)updateStateWithStartingIndexPath:(id)arg1 otherSelectedIndexPaths:(id)arg2;

@end
