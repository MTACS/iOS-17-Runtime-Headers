
@interface MADataFrame : NSObject {
    MAIndexCache * _columnIndexCache;
    MAFloatMatrix * _matrix;
    NSString * _name;
    MAIndexCache * _rowIndexCache;
}

@property (nonatomic, readonly) MAIndexCache *columnIndexCache;
@property (nonatomic, readonly, copy) NSArray *columnLabels;
@property (nonatomic, readonly, copy) MAFloatMatrix *matrix;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) MAIndexCache *rowIndexCache;
@property (nonatomic, readonly, copy) NSArray *rowLabels;

- (void).cxx_destruct;
- (id)columnIndexCache;
- (id)columnLabels;
- (id)csvString;
- (id)dataFrameByAppendingColumnsOfDataFrame:(id)arg1 withName:(id)arg2;
- (id)description;
- (float)floatAtRowIndex:(long long)arg1 columnIndex:(long long)arg2;
- (unsigned long long)hash;
- (long long)indexOfColumnWithLabel:(id)arg1;
- (long long)indexOfRowWithLabel:(id)arg1;
- (id)initWithName:(id)arg1 rowIndexCache:(id)arg2 columnIndexCache:(id)arg3 matrix:(id)arg4;
- (id)initWithName:(id)arg1 rowLabels:(id)arg2 columnLabels:(id)arg3 matrix:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)matrix;
- (id)name;
- (id)numberAtRow:(id)arg1 column:(id)arg2;
- (id)rowIndexCache;
- (id)rowLabels;

@end
