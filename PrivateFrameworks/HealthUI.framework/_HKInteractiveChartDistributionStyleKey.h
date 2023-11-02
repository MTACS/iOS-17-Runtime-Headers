
@interface _HKInteractiveChartDistributionStyleKey : NSObject <NSCopying> {
    NSString * _predicateName;
    long long  _style;
    long long  _timeScope;
}

@property (nonatomic, retain) NSString *predicateName;
@property (nonatomic) long long style;
@property (nonatomic) long long timeScope;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithDistributionStyle:(long long)arg1 timeScope:(long long)arg2 predicateName:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)predicateName;
- (void)setPredicateName:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTimeScope:(long long)arg1;
- (long long)style;
- (long long)timeScope;

@end
