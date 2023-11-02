
@interface SUUIStorePageSplitsDescription : NSObject <NSCopying> {
    SUUIStorePageSplit * _bottomSplit;
    SUUIStorePageSplit * _leftSplit;
    SUUIStorePageSplit * _rightSplit;
    SUUIStorePageSplit * _topSplit;
}

@property (nonatomic, copy) SUUIStorePageSplit *bottomSplit;
@property (nonatomic, readonly) SUUIStorePageSplit *firstSplit;
@property (nonatomic, copy) SUUIStorePageSplit *leftSplit;
@property (nonatomic, readonly) long long numberOfSplits;
@property (nonatomic, copy) SUUIStorePageSplit *rightSplit;
@property (nonatomic, copy) SUUIStorePageSplit *topSplit;

- (void).cxx_destruct;
- (id)bottomSplit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)enumerateSplitsUsingBlock:(id /* block */)arg1;
- (id)firstSplit;
- (id)leftSplit;
- (long long)numberOfSplits;
- (id)rightSplit;
- (void)setBottomSplit:(id)arg1;
- (void)setLeftSplit:(id)arg1;
- (void)setRightSplit:(id)arg1;
- (void)setTopSplit:(id)arg1;
- (void)sizeSplitsToFitWidth:(double)arg1 usingBlock:(id /* block */)arg2;
- (id)topSplit;

@end
