
@interface CLKCurrentTimeTextProvider : CLKTimeTextProvider {
    unsigned long long  _calendarUnits;
    NSDate * _overrideDate;
    NSString * _sessionCacheKey;
    NSDateComponents * _sessionComponents;
    bool  _sessionInProgress;
}

@property (nonatomic, copy) NSDate *overrideDate;

+ (bool)supportsSecureCoding;
+ (id)textProviderWithTimeZone:(id)arg1;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (void)_endSession;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (id)_sessionCacheKey;
- (void)_startSessionWithDate:(id)arg1;
- (long long)_updateFrequency;
- (bool)_validate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)overrideDate;
- (void)setOverrideDate:(id)arg1;

@end
