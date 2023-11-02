
@interface FHFeatureInsight : NSObject <FHInsightProtocol, NSSecureCoding> {
    NSDecimalNumber * averageAmount;
    NSString * currencyCode;
    long long  detectionType;
    long long  direction;
    NSDate * endDate;
    NSDecimalNumber * spendAmount;
    NSDate * startDate;
    NSString * type;
    long long  window;
    unsigned long long  windowReference;
}

@property (nonatomic, copy) NSDecimalNumber *averageAmount;
@property (nonatomic, copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long detectionType;
@property (nonatomic) long long direction;
@property (nonatomic, copy) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDecimalNumber *spendAmount;
@property (nonatomic, copy) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) long long window;
@property (nonatomic) unsigned long long windowReference;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)averageAmount;
- (id)currencyCode;
- (id)description;
- (long long)detectionType;
- (long long)direction;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (void)setAverageAmount:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setDetectionType:(long long)arg1;
- (void)setDirection:(long long)arg1;
- (void)setEndDate:(id)arg1;
- (void)setSpendAmount:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setType:(id)arg1;
- (void)setWindow:(long long)arg1;
- (void)setWindowReference:(unsigned long long)arg1;
- (id)spendAmount;
- (id)startDate;
- (id)type;
- (long long)window;
- (unsigned long long)windowReference;

@end
