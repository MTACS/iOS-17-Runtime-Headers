
@interface HKSelectedRangeData : NSObject {
    NSAttributedString * _attributedString;
    long long  _dataType;
    bool  _prefersImageAffixes;
    UIColor * _prefixColor;
    long long  _statisticsType;
    NSString * _titleOverride;
    id /* block */  _titleTapOutBlock;
    NSNumber * _valueAsNumber;
}

@property (nonatomic, copy) NSAttributedString *attributedString;
@property (nonatomic) long long dataType;
@property (nonatomic) bool prefersImageAffixes;
@property (nonatomic, copy) UIColor *prefixColor;
@property (nonatomic) long long statisticsType;
@property (nonatomic, copy) NSString *titleOverride;
@property (nonatomic, copy) id /* block */ titleTapOutBlock;
@property (nonatomic, copy) NSNumber *valueAsNumber;

- (void).cxx_destruct;
- (id)attributedString;
- (long long)dataType;
- (id)description;
- (unsigned long long)hash;
- (id)initWithStatisticsType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSelectedRangeData:(id)arg1;
- (bool)prefersImageAffixes;
- (id)prefixColor;
- (void)setAttributedString:(id)arg1;
- (void)setDataType:(long long)arg1;
- (void)setPrefersImageAffixes:(bool)arg1;
- (void)setPrefixColor:(id)arg1;
- (void)setStatisticsType:(long long)arg1;
- (void)setTitleOverride:(id)arg1;
- (void)setTitleTapOutBlock:(id /* block */)arg1;
- (void)setValueAsNumber:(id)arg1;
- (long long)statisticsType;
- (id)titleOverride;
- (id /* block */)titleTapOutBlock;
- (id)valueAsNumber;

@end
