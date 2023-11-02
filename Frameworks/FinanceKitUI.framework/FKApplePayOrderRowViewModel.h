
@interface FKApplePayOrderRowViewModel : NSObject {
    id /* block */  _cellConfigurationHandler;
    NSString * _fulfillmentIdentifier;
    NSString * _orderIdentifier;
    NSString * _orderTypeIdentifier;
}

@property (nonatomic, readonly, copy) id /* block */ cellConfigurationHandler;
@property (nonatomic, readonly, copy) NSString *fulfillmentIdentifier;
@property (nonatomic, readonly, copy) NSString *orderIdentifier;
@property (nonatomic, readonly, copy) NSString *orderTypeIdentifier;

- (void).cxx_destruct;
- (id /* block */)cellConfigurationHandler;
- (void)configureCell:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fulfillmentIdentifier;
- (id)initWithOrderTypeIdentifier:(id)arg1 orderIdentifier:(id)arg2 fulfillmentIdentifier:(id)arg3 cellConfigurationHandler:(id /* block */)arg4;
- (id)orderIdentifier;
- (id)orderTypeIdentifier;

@end
