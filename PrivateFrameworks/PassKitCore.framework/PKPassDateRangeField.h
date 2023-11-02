
@interface PKPassDateRangeField : PKPassDateField {
    NSString * _displayableEndDate;
    NSString * _displayableStartDate;
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (nonatomic, copy) NSString *displayableEndDate;
@property (nonatomic, copy) NSString *displayableStartDate;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_displayableDate:(id)arg1;
- (id)asDictionary;
- (id)asMuteDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayableEndDate;
- (id)displayableStartDate;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (void)setDisplayableEndDate:(id)arg1;
- (void)setDisplayableStartDate:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (id)value;

@end
