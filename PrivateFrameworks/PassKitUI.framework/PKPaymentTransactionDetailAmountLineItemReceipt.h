
@interface PKPaymentTransactionDetailAmountLineItemReceipt : NSObject <PKPaymentTransactionDetailAmountLineItem> {
    bool  _hasTrailingLineSeperator;
    PKTransactionReceiptLineItem * _lineItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasTrailingLineSeperator;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) bool isEmphasized;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) unsigned long long lineItemType;
@property (nonatomic, readonly) NSString *secondaryLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *tertiaryLabel;
@property (nonatomic, readonly) NSString *value;

- (void).cxx_destruct;
- (bool)hasTrailingLineSeperator;
- (id)image;
- (id)initWithReceiptLineItem:(id)arg1;
- (bool)isEmphasized;
- (id)label;
- (unsigned long long)lineItemType;
- (id)secondaryLabel;
- (void)setHasTrailingLineSeperator:(bool)arg1;
- (id)tertiaryLabel;
- (id)value;

@end
