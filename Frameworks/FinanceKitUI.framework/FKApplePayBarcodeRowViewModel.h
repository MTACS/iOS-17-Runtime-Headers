
@interface FKApplePayBarcodeRowViewModel : NSObject {
    id /* block */  _cellConfigurationHandler;
}

@property (nonatomic, readonly, copy) id /* block */ cellConfigurationHandler;

- (void).cxx_destruct;
- (id /* block */)cellConfigurationHandler;
- (void)configureCell:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCellConfigurationHandler:(id /* block */)arg1;

@end
