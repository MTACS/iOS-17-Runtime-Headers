
@interface SUCellConfigurationCache : NSObject {
    id  _cellContext;
    NSMutableArray * _configurations;
}

@property (nonatomic, retain) id cellContext;

- (id)cellContext;
- (id)configurationForRow:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithClass:(Class)arg1 tableHeight:(double)arg2;
- (void)reset;
- (void)resetLayoutCaches;
- (void)setCellContext:(id)arg1;

@end
