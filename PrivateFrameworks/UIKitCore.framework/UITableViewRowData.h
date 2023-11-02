
@interface UITableViewRowData : NSObject <NSCopying> {
    double  _defaultSectionFooterHeight;
    double  _defaultSectionHeaderHeight;
    NSIndexPath * _draggedIndexPath;
    double  _draggedRowHeight;
    bool  _estimatesHeights;
    NSIndexPath * _gapIndexPath;
    double  _gapRowHeight;
    long long  _headerFooterPinningBehavior;
    UITableViewHeaderFooterView * _headerFooterViewUsedForMeasurements;
    double  _heightForTableHeaderViewHiding;
    double  _minimumRowHeight;
    long long  _numSections;
    NSIndexPath * _reorderedIndexPath;
    struct { 
        unsigned int tableHeaderHeightValid : 1; 
        unsigned int tableFooterHeightValid : 1; 
        unsigned int tableSidePaddingValid : 1; 
        unsigned int usesVariableMargins : 1; 
        unsigned int pinsTableHeaderView : 1; 
    }  _rowDataFlags;
    double  _rowSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionContentInset;
    id * _sectionRowData;
    long long  _sectionRowDataCapacity;
    double  _tableBottomPadding;
    double  _tableFooterHeight;
    double  _tableHeaderHeight;
    double  _tableSidePadding;
    double  _tableTopPadding;
    <UITable_RowDataSource> * _tableView;
    double  _tableViewWidth;
}

+ (int)sectionLocationForRow:(long long)arg1 inSection:(long long)arg2 numRows:(unsigned long long)arg3 gapIndexPath:(id)arg4 rowSpacing:(double)arg5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;

@end
