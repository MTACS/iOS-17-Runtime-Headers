
@interface ASFIAPItem : NSObject <NSCopying> {
    NSDate * _originalPurchaseDate;
    NSString * _originalTransactionID;
    NSString * _productID;
    NSDate * _purchaseDate;
    NSNumber * _quantity;
    NSString * _transactionID;
}

@property (readonly) NSDate *originalPurchaseDate;
@property (readonly) NSString *originalTransactionID;
@property (readonly) NSString *productID;
@property (readonly) NSDate *purchaseDate;
@property (readonly) NSNumber *quantity;
@property (readonly) NSString *transactionID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)originalPurchaseDate;
- (id)originalTransactionID;
- (id)productID;
- (id)purchaseDate;
- (id)quantity;
- (id)transactionID;

@end
