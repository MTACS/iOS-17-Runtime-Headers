
@interface MUVendorLinkSortParameters : NSObject {
    bool  _sortAlphabetically;
    NSString * _winningAdamId;
}

@property (nonatomic) bool sortAlphabetically;
@property (nonatomic, copy) NSString *winningAdamId;

- (void).cxx_destruct;
- (void)setSortAlphabetically:(bool)arg1;
- (void)setWinningAdamId:(id)arg1;
- (bool)sortAlphabetically;
- (id)winningAdamId;

@end
