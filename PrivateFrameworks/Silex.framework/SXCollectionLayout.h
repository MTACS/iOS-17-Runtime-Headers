
@interface SXCollectionLayout : NSObject {
    NSArray * _rowsLayouts;
    double  _spaceBetweenRows;
}

@property (nonatomic, retain) NSArray *rowsLayouts;
@property (nonatomic) double spaceBetweenRows;

- (void).cxx_destruct;
- (id)description;
- (id)rowsLayouts;
- (void)setRowsLayouts:(id)arg1;
- (void)setSpaceBetweenRows:(double)arg1;
- (double)spaceBetweenRows;

@end
