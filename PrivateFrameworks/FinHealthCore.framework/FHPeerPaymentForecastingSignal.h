
@interface FHPeerPaymentForecastingSignal : NSObject <NSSecureCoding> {
    NSString * _dayOfWeek;
    unsigned long long  _forecastingType;
    NSDecimalNumber * _frequency;
    NSSet * _peerPaymentHeuristicIds;
    NSString * _periodicCategory;
    NSDate * _signalDate;
}

@property (nonatomic, copy) NSString *dayOfWeek;
@property (nonatomic) unsigned long long forecastingType;
@property (nonatomic, copy) NSDecimalNumber *frequency;
@property (nonatomic, copy) NSSet *peerPaymentHeuristicIds;
@property (nonatomic, copy) NSString *periodicCategory;
@property (nonatomic, copy) NSDate *signalDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dayOfWeek;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)forecastingType;
- (id)frequency;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)peerPaymentHeuristicIds;
- (id)periodicCategory;
- (void)setDayOfWeek:(id)arg1;
- (void)setForecastingType:(unsigned long long)arg1;
- (void)setFrequency:(id)arg1;
- (void)setPeerPaymentHeuristicIds:(id)arg1;
- (void)setPeriodicCategory:(id)arg1;
- (void)setSignalDate:(id)arg1;
- (id)signalDate;

@end
