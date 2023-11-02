
@interface ICASSessionData : NSObject <AADataEventType> {
    NSArray * _accountTypeSummary;
    NSNumber * _bioAuthEnabled;
    ICASCellularRadioAccessTechnology * _cellularRadioAccessTechnology;
    NSString * _countryCode;
    NSNumber * _isGlobalSession;
    NSNumber * _isSaltRegenerated;
    NSString * _languageCode;
    NSNumber * _localNotesEnabled;
    NSString * _productType;
    NSString * _sessionType;
    NSNumber * _utcOffset;
}

@property (nonatomic, readonly) NSArray *accountTypeSummary;
@property (nonatomic, readonly) NSNumber *bioAuthEnabled;
@property (nonatomic, readonly) ICASCellularRadioAccessTechnology *cellularRadioAccessTechnology;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSNumber *isGlobalSession;
@property (nonatomic, readonly) NSNumber *isSaltRegenerated;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) NSNumber *localNotesEnabled;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) NSString *sessionType;
@property (nonatomic, readonly) NSNumber *utcOffset;

+ (id)dataName;

- (void).cxx_destruct;
- (id)accountTypeSummary;
- (id)bioAuthEnabled;
- (id)cellularRadioAccessTechnology;
- (id)countryCode;
- (id)initWithUtcOffset:(id)arg1 countryCode:(id)arg2 languageCode:(id)arg3 productType:(id)arg4 cellularRadioAccessTechnology:(id)arg5 bioAuthEnabled:(id)arg6 localNotesEnabled:(id)arg7 accountTypeSummary:(id)arg8 sessionType:(id)arg9 isSaltRegenerated:(id)arg10 isGlobalSession:(id)arg11;
- (id)isGlobalSession;
- (id)isSaltRegenerated;
- (id)languageCode;
- (id)localNotesEnabled;
- (id)productType;
- (id)sessionType;
- (id)toDict;
- (id)utcOffset;

@end
