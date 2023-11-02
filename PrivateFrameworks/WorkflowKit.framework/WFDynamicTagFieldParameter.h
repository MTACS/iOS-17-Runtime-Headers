
@interface WFDynamicTagFieldParameter : WFTagFieldParameter {
    <WFDynamicTagFieldDataSource> * _dataSource;
}

@property (nonatomic) <WFDynamicTagFieldDataSource> *dataSource;

- (void).cxx_destruct;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)suggestedTags;

@end
