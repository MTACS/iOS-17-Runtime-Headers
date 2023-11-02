
@interface PKPaymentTransactionDetailAmountLineCompletionDate : NSObject <PKPaymentTransactionDetailAmountLineItem> {
    bool  _completed;
    NSDate * _date;
    bool  _hasTrailingLineSeperator;
}

@property (nonatomic, readonly) bool completed;
@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasTrailingLineSeperator;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEmphasized;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) unsigned long long lineItemType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *value;

- (void).cxx_destruct;
- (bool)completed;
- (id)date;
- (bool)hasTrailingLineSeperator;
- (id)image;
- (id)initWithDate:(id)arg1 completed:(bool)arg2;
- (bool)isEmphasized;
- (id)label;
- (unsigned long long)lineItemType;
- (id)secondaryLabel;
- (void)setHasTrailingLineSeperator:(bool)arg1;
- (id)tertiaryLabel;
- (id)value;

@end
