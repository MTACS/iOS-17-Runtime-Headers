
@interface SPStockListComplicationData : SPComplicationData <NSSecureCoding> {
    NSArray * _stockList;
}

@property (nonatomic, retain) NSArray *stockList;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setStockList:(id)arg1;
- (id)stockList;

@end
