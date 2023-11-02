
@interface FKApplePayReceiptRowViewModel : NSObject {
    id /* block */  _cellConfigurationHandler;
    id /* block */  _cellSelectionHandler;
    NSString * _receiptName;
}

@property (nonatomic, readonly, copy) id /* block */ cellConfigurationHandler;
@property (nonatomic, readonly, copy) id /* block */ cellSelectionHandler;
@property (nonatomic, readonly, copy) NSString *receiptName;

- (void).cxx_destruct;
- (id /* block */)cellConfigurationHandler;
- (id /* block */)cellSelectionHandler;
- (void)configureCell:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)didSelectCell;
- (id)initWithReceiptName:(id)arg1 cellConfigurationHandler:(id /* block */)arg2 cellSelectionHandler:(id /* block */)arg3;
- (id)receiptName;

@end
