
@interface PKPaymentTransactionDetailAmountLineItemGeneric : NSObject <PKPaymentTransactionDetailAmountLineItem> {
    bool  _hasTrailingLineSeperator;
    bool  _isEmphasized;
    NSString * _label;
    NSString * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasTrailingLineSeperator;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isEmphasized;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) unsigned long long lineItemType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *value;

- (void).cxx_destruct;
- (bool)hasTrailingLineSeperator;
- (id)initWithLabel:(id)arg1 value:(id)arg2;
- (bool)isEmphasized;
- (id)label;
- (unsigned long long)lineItemType;
- (void)setHasTrailingLineSeperator:(bool)arg1;
- (void)setIsEmphasized:(bool)arg1;
- (id)value;

@end
