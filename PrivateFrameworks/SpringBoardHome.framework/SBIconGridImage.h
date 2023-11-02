
@interface SBIconGridImage : UIImage {
    <SBIconListLayout> * _listLayout;
    CPMemoryPool * _pool;
    unsigned int  _treatedCells;
}

@property (nonatomic, retain) <SBIconListLayout> *listLayout;
@property (nonatomic, readonly) unsigned long long numberOfCells;
@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (nonatomic, retain) CPMemoryPool *pool;
@property (nonatomic) unsigned int treatedCells;

+ (id)gridImageForLayout:(id)arg1 cellImageDrawBlock:(id /* block */)arg2;
+ (id)gridImageForLayout:(id)arg1 pool:(id)arg2 cellImageDrawBlock:(id /* block */)arg3;
+ (id)gridImageForLayout:(id)arg1 previousGridImage:(id)arg2 previousGridCellIndexToUpdate:(unsigned long long)arg3 pool:(id)arg4 cellImageDrawBlock:(id /* block */)arg5;
+ (unsigned long long)numberOfRowsForNumberOfCells:(unsigned long long)arg1 inLayout:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectAtIndex:(unsigned long long)arg1 inLayout:(id)arg2 maxCount:(unsigned long long)arg3;
+ (struct CGSize { double x1; double x2; })sizeForLayout:(id)arg1;

- (void).cxx_destruct;
- (id)gridImageByPatchingCellAtIndex:(unsigned long long)arg1 cellImageProviderBlock:(id /* block */)arg2;
- (id)iconImageAtIndex:(unsigned long long)arg1;
- (bool)isIconImageTreatedAtIndex:(unsigned long long)arg1;
- (id)listLayout;
- (unsigned long long)numberOfCells;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (id)pool;
- (void)setListLayout:(id)arg1;
- (void)setPool:(id)arg1;
- (void)setTreatedCells:(unsigned int)arg1;
- (unsigned int)treatedCells;

@end
