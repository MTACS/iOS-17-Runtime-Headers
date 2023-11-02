
@interface SBIconListViewLayoutMetrics : NSObject <BSDescriptionProviding, NSCopying> {
    bool  _adjustedIconContentScaleToFit;
    bool  _adjustedInsetsToFit;
    struct CGSize { 
        double width; 
        double height; 
    }  _alignmentIconSize;
    long long  _columnOffset;
    unsigned long long  _columns;
    unsigned long long  _columnsUsedForLayout;
    SBIconListGridCellInfo * _gridCellInfo;
    double  _iconContentScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconImageSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _iconInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSpacing;
    SBIconListModel * _listModel;
    bool  _needsHorizontalColumnBumps;
    unsigned long long  _rows;
    unsigned long long  _rowsUsedForLayout;
}

@property (nonatomic) bool adjustedIconContentScaleToFit;
@property (nonatomic) bool adjustedInsetsToFit;
@property (nonatomic) struct CGSize { double x1; double x2; } alignmentIconSize;
@property (nonatomic) long long columnOffset;
@property (nonatomic) unsigned long long columns;
@property (nonatomic) unsigned long long columnsUsedForLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBIconListGridCellInfo *gridCellInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic) double iconContentScale;
@property (nonatomic) struct CGSize { double x1; double x2; } iconImageSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } iconInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } iconSize;
@property (nonatomic) struct CGSize { double x1; double x2; } iconSpacing;
@property (nonatomic, retain) SBIconListModel *listModel;
@property (nonatomic) bool needsHorizontalColumnBumps;
@property (nonatomic) unsigned long long rows;
@property (nonatomic) unsigned long long rowsUsedForLayout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)adjustedIconContentScaleToFit;
- (bool)adjustedInsetsToFit;
- (struct CGSize { double x1; double x2; })alignmentIconSize;
- (long long)columnOffset;
- (unsigned long long)columns;
- (unsigned long long)columnsUsedForLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)gridCellInfo;
- (double)iconContentScale;
- (struct CGSize { double x1; double x2; })iconImageSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })iconInsets;
- (struct CGSize { double x1; double x2; })iconSize;
- (struct CGSize { double x1; double x2; })iconSpacing;
- (id)listModel;
- (bool)needsHorizontalColumnBumps;
- (unsigned long long)rows;
- (unsigned long long)rowsUsedForLayout;
- (void)setAdjustedIconContentScaleToFit:(bool)arg1;
- (void)setAdjustedInsetsToFit:(bool)arg1;
- (void)setAlignmentIconSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setColumnOffset:(long long)arg1;
- (void)setColumns:(unsigned long long)arg1;
- (void)setColumnsUsedForLayout:(unsigned long long)arg1;
- (void)setGridCellInfo:(id)arg1;
- (void)setIconContentScale:(double)arg1;
- (void)setIconImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIconInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIconSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIconSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setListModel:(id)arg1;
- (void)setNeedsHorizontalColumnBumps:(bool)arg1;
- (void)setRows:(unsigned long long)arg1;
- (void)setRowsUsedForLayout:(unsigned long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
