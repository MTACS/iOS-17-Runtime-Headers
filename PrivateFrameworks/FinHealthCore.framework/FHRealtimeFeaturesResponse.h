
@interface FHRealtimeFeaturesResponse : NSObject {
    NSString * _country;
    bool  _isInternationalSpend;
    bool  _isTapToPay;
    unsigned long long  _merchantCategory;
    NSString * _merchantDisplayName;
    unsigned long long  _repeatingPatternClass;
    NSDictionary * _smartCompoundFeatures;
    unsigned long long  _timeOfDay;
    unsigned long long  _transactionDateAtZerothHour;
}

@property (nonatomic, copy) NSString *country;
@property (nonatomic) bool isInternationalSpend;
@property (nonatomic) bool isTapToPay;
@property (nonatomic) unsigned long long merchantCategory;
@property (nonatomic, copy) NSString *merchantDisplayName;
@property (nonatomic) unsigned long long repeatingPatternClass;
@property (nonatomic, copy) NSDictionary *smartCompoundFeatures;
@property (nonatomic) unsigned long long timeOfDay;
@property (nonatomic) unsigned long long transactionDateAtZerothHour;

- (void).cxx_destruct;
- (id)country;
- (id)description;
- (bool)isInternationalSpend;
- (bool)isTapToPay;
- (unsigned long long)merchantCategory;
- (id)merchantDisplayName;
- (unsigned long long)repeatingPatternClass;
- (void)setCountry:(id)arg1;
- (void)setIsInternationalSpend:(bool)arg1;
- (void)setIsTapToPay:(bool)arg1;
- (void)setMerchantCategory:(unsigned long long)arg1;
- (void)setMerchantDisplayName:(id)arg1;
- (void)setRepeatingPatternClass:(unsigned long long)arg1;
- (void)setSmartCompoundFeatures:(id)arg1;
- (void)setTimeOfDay:(unsigned long long)arg1;
- (void)setTransactionDateAtZerothHour:(unsigned long long)arg1;
- (id)smartCompoundFeatures;
- (id)smartCompoundFeaturesDictionaryForJson;
- (unsigned long long)timeOfDay;
- (unsigned long long)transactionDateAtZerothHour;

@end
