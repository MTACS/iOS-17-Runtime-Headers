
@interface ICTableTextViewManager : NSObject {
    unsigned long long  _anchorColumn;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    unsigned long long  _anchorRow;
    NSMutableDictionary * _cachedCellHeights;
    ICDimensionSumCache * _cachedColumnWidths;
    ICDimensionSumCache * _cachedRowHeights;
    NSMutableArray * _columnIdentifiers;
    NSMutableDictionary * _columnTextViews;
    NSMutableSet * _columnsNeedingRestyle;
    ICTableContentView * _contentView;
    <ICTableTextViewManagerDelegate> * _delegate;
    NSSet * _draggedColumns;
    NSSet * _draggedRows;
    NSMutableSet * _prepopulatedColumns;
    NSArray * _previousRowIdentifiers;
    NSMutableArray * _rowIdentifiers;
    ICTableLayoutManager * _tableLayoutManager;
    bool  _updatingTiles;
}

@property (nonatomic) unsigned long long anchorColumn;
@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic) unsigned long long anchorRow;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, readonly) NSMutableDictionary *cachedCellHeights;
@property (nonatomic, readonly) ICDimensionSumCache *cachedColumnWidths;
@property (nonatomic, readonly) ICDimensionSumCache *cachedRowHeights;
@property (nonatomic, readonly) NSArray *columnIDs;
@property (nonatomic, readonly) NSMutableArray *columnIdentifiers;
@property (nonatomic, readonly) NSMutableDictionary *columnTextViews;
@property (nonatomic, retain) NSMutableSet *columnsNeedingRestyle;
@property (nonatomic, readonly) ICTableContentView *contentView;
@property (nonatomic) <ICTableTextViewManagerDelegate> *delegate;
@property (nonatomic, retain) NSSet *draggedColumns;
@property (nonatomic, retain) NSSet *draggedRows;
@property (nonatomic, readonly) NSMutableSet *prepopulatedColumns;
@property (nonatomic, retain) NSArray *previousRowIdentifiers;
@property (nonatomic, readonly) NSArray *rowIDs;
@property (nonatomic, readonly) NSMutableArray *rowIdentifiers;
@property (nonatomic, readonly) ICTableLayoutManager *tableLayoutManager;
@property (getter=isUpdatingTiles, nonatomic) bool updatingTiles;

- (void).cxx_destruct;
- (double)addColumn:(id)arg1 atEnd:(bool)arg2;
- (double)addRow:(id)arg1 atEnd:(bool)arg2;
- (void)adjustOnscreenPositions;
- (unsigned long long)anchorColumn;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (unsigned long long)anchorRow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (id)cachedCellHeights;
- (id)cachedColumnWidths;
- (id)cachedRowHeights;
- (bool)cellContainingPoint:(struct CGPoint { double x1; double x2; })arg1 columnID:(id*)arg2 rowID:(id*)arg3;
- (void)clearColumn:(id)arg1;
- (void)clearColumnsOutsideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)clearRow:(id)arg1;
- (void)clearRowsOutsideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)columnContainingX:(double)arg1;
- (id)columnIDs;
- (id)columnIdentifiers;
- (id)columnTextViews;
- (id)columnsNeedingRestyle;
- (id)contentView;
- (void)dealloc;
- (id)delegate;
- (id)draggedColumns;
- (id)draggedRows;
- (void)ensureCellPositionForColumn:(id)arg1 andRow:(id)arg2;
- (double)ensureChunkOfPopulatedColumnsForColumn:(id)arg1;
- (double)ensureChunkOfPopulatedRowsForRow:(id)arg1 shouldForce:(bool)arg2;
- (void)enumerateTextViewsWithBlock:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfCellAtColumn:(id)arg1 row:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfColumn:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfRow:(id)arg1;
- (void)heightChangedForRow:(id)arg1 by:(double)arg2;
- (id)init;
- (id)initWithTableLayoutManager:(id)arg1 view:(id)arg2 cachedWidths:(id)arg3 cachedRowHeights:(id)arg4 cachedCellHeights:(id)arg5;
- (struct CGPoint { double x1; double x2; })initialScrollPointForViewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isUpdatingTiles;
- (void)moveColumnAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)moveRowAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)parentViewDidChange;
- (double)preAddColumn:(id)arg1;
- (double)preAddRow:(id)arg1 atYPosition:(double)arg2;
- (id)prepopulatedColumns;
- (id)previousRowIdentifiers;
- (struct CGPoint { double x1; double x2; })redrawAllWithViewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeColumn:(id)arg1;
- (void)restyleCells;
- (void)restyleTextView:(id)arg1;
- (id)rowContainingY:(double)arg1;
- (id)rowIDs;
- (id)rowIdentifiers;
- (void)setAnchorColumn:(unsigned long long)arg1;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAnchorRow:(unsigned long long)arg1;
- (void)setColumnsNeedingRestyle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDraggedColumns:(id)arg1;
- (void)setDraggedRows:(id)arg1;
- (void)setPreviousRowIdentifiers:(id)arg1;
- (void)setUpdatingTiles:(bool)arg1;
- (id)tableLayoutManager;
- (id)textViewForColumn:(id)arg1;
- (id)textViewForColumn:(id)arg1 createIfNeeded:(bool)arg2;
- (void)updateAuthorHighlights;
- (struct CGPoint { double x1; double x2; })updateTilesWithViewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 redrawAll:(bool)arg2;
- (void)validateRowHeightsForColumn:(id)arg1;

@end
