
@interface PKAccountHistoricalBalance : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _balance;
    NSDate * _date;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSDecimalNumber *balance;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)balance;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBalance:(id)arg1 date:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setBalance:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
