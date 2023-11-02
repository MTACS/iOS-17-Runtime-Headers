
@interface PXSearchZeroKeywordGadgetProvider : PXGadgetProvider {
    long long  _sectionType;
    PXSearchZeroKeywordDataSource * _zeroKeywordDataSource;
}

@property (nonatomic, readonly) long long sectionType;
@property (nonatomic, readonly) PXSearchZeroKeywordDataSource *zeroKeywordDataSource;

- (void).cxx_destruct;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)initWithZeroKeywordDataSource:(id)arg1 sectionType:(long long)arg2;
- (long long)sectionType;
- (id)visibleIndexPaths;
- (id)zeroKeywordDataSource;

@end
