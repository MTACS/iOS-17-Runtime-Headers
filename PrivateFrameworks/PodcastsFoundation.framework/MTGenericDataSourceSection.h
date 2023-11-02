
@interface MTGenericDataSourceSection : NSObject {
    void shouldIncludeSeeAllBlock;
    void storedTitle;
}

@property (nonatomic, copy) id /* block */ shouldIncludeSeeAllBlock;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (void)setShouldIncludeSeeAllBlock:(id /* block */)arg1;
- (id /* block */)shouldIncludeSeeAllBlock;

@end
