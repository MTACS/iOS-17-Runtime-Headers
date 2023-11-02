
@interface WFAirPollutant : NSObject <NSCopying, NSSecureCoding> {
    double  _amount;
    unsigned long long  _categoryIndex;
    unsigned long long  _index;
    NSString * _localizedCategoryDescription;
    NSString * _localizedDescription;
    NSString * _localizedName;
    NSString * _unit;
}

@property (nonatomic) double amount;
@property (nonatomic) unsigned long long categoryIndex;
@property (nonatomic) unsigned long long index;
@property (nonatomic, retain) NSString *localizedCategoryDescription;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic, retain) NSString *unit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)amount;
- (unsigned long long)categoryIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)index;
- (id)initWithCoder:(id)arg1;
- (id)localizedCategoryDescription;
- (id)localizedDescription;
- (id)localizedName;
- (void)setAmount:(double)arg1;
- (void)setCategoryIndex:(unsigned long long)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setLocalizedCategoryDescription:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setUnit:(id)arg1;
- (id)unit;

@end
