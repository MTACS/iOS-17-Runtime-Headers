
@interface WFHKGroupingConfiguration : NSObject {
    bool  _fillMissing;
    long long  _groupingOption;
    NSDate * _queryEndDate;
    NSDate * _queryStartDate;
}

@property (nonatomic) bool fillMissing;
@property (nonatomic) long long groupingOption;
@property (nonatomic, retain) NSDate *queryEndDate;
@property (nonatomic, retain) NSDate *queryStartDate;

- (void).cxx_destruct;
- (bool)fillMissing;
- (long long)groupingOption;
- (id)queryEndDate;
- (id)queryStartDate;
- (void)setFillMissing:(bool)arg1;
- (void)setGroupingOption:(long long)arg1;
- (void)setQueryEndDate:(id)arg1;
- (void)setQueryStartDate:(id)arg1;

@end
