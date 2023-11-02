
@interface PMLDenseMatrix : NSObject {
    PMLDenseVector * _data;
    unsigned long long  _numberOfColumns;
    unsigned long long  _numberOfRows;
}

@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic, readonly) unsigned long long numberOfRows;

+ (id)denseMatrixFromData:(id)arg1 numberOfRows:(unsigned long long)arg2 numberOfColumns:(unsigned long long)arg3;
+ (id)denseMatrixFromNumbers:(id)arg1;

- (void).cxx_destruct;
- (void)enumerateNonZeroValuesWithBlock:(id /* block */)arg1;
- (id)initWithData:(id)arg1 numberOfRows:(unsigned long long)arg2 numberOfColumns:(unsigned long long)arg3;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (const float*)values;

@end
