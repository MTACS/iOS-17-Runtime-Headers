
@interface UITableViewPlaceholder : NSObject {
    id /* block */  _cellUpdateHandler;
    NSIndexPath * _insertionIndexPath;
    NSString * _reuseIdentifier;
    double  _rowHeight;
}

@property (nonatomic, copy) id /* block */ cellUpdateHandler;
@property (nonatomic, retain) NSIndexPath *insertionIndexPath;
@property (nonatomic, retain) NSString *reuseIdentifier;
@property (nonatomic) double rowHeight;

- (void).cxx_destruct;
- (id /* block */)cellUpdateHandler;
- (id)initWithInsertionIndexPath:(id)arg1 reuseIdentifier:(id)arg2 rowHeight:(double)arg3;
- (id)insertionIndexPath;
- (id)reuseIdentifier;
- (double)rowHeight;
- (void)setCellUpdateHandler:(id /* block */)arg1;
- (void)setInsertionIndexPath:(id)arg1;
- (void)setReuseIdentifier:(id)arg1;
- (void)setRowHeight:(double)arg1;

@end
