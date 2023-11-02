
@interface FHSmartCompoundFeatureRankedValue : NSObject <NSSecureCoding> {
    NSDate * _eventEndDate;
    NSArray * _eventIdentifiers;
    NSDate * _eventStartDate;
    NSString * _featureLabel;
    NSDecimalNumber * _featureRank;
}

@property (nonatomic, copy) NSDate *eventEndDate;
@property (nonatomic, copy) NSArray *eventIdentifiers;
@property (nonatomic, copy) NSDate *eventStartDate;
@property (nonatomic, readonly, copy) NSString *featureLabel;
@property (nonatomic, readonly, copy) NSDecimalNumber *featureRank;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventEndDate;
- (id)eventIdentifiers;
- (id)eventStartDate;
- (id)featureLabel;
- (id)featureRank;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabelAndIntegerRank:(id)arg1 featureRank:(long long)arg2;
- (id)initWithLabelAndRank:(id)arg1 featureRank:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setEventEndDate:(id)arg1;
- (void)setEventIdentifiers:(id)arg1;
- (void)setEventStartDate:(id)arg1;

@end
