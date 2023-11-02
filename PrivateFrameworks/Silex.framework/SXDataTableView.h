
@interface SXDataTableView : SXDataTableDrawView {
    SXDataTableBlueprint * _blueprint;
    NSMutableDictionary * _columnViews;
    <SXDataTableDataSource> * _dataSource;
    NSMutableDictionary * _rowViews;
    <SXDataTableViewDataSource> * _viewDataSource;
}

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })originOffset;

@end
