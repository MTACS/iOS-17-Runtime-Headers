
@interface CLSHolidayCalendarEventRuleRequiredTraits : CLSHolidayCalendarEventRuleTraits {
    bool  _allowApproximateDateCalculation;
    NSDictionary * _defaultScenesWithImportanceString;
    unsigned long long  _eventCategory;
    unsigned long long  _minimumPeopleCount;
    bool  _mustContainMePerson;
    unsigned long long  _type;
}

@property (nonatomic, readonly) bool allowApproximateDateCalculation;
@property (nonatomic, retain) NSDictionary *defaultScenesWithImportanceString;
@property (nonatomic) unsigned long long eventCategory;
@property (nonatomic, readonly) bool isCelebration;
@property (nonatomic) unsigned long long minimumPeopleCount;
@property (nonatomic) bool mustContainMePerson;
@property (nonatomic) unsigned long long type;

+ (id)_locationTraitDebugStringForTrait:(unsigned long long)arg1;
+ (id)_peopleTraitDebugStringForTrait:(unsigned long long)arg1;
+ (unsigned long long)importanceEnumForImportanceString:(id)arg1;

- (void).cxx_destruct;
- (bool)allowApproximateDateCalculation;
- (id)defaultScenesWithImportanceString;
- (id)description;
- (bool)evaluateWithTraits:(id)arg1 evaluateLocationTraits:(bool)arg2;
- (unsigned long long)eventCategory;
- (unsigned long long)importanceForScene:(id)arg1;
- (id)initWithDescription:(id)arg1;
- (bool)isCelebration;
- (unsigned long long)minimumPeopleCount;
- (bool)mustContainMePerson;
- (bool)peopleCountRangeIsRequired;
- (void)setDefaultScenesWithImportanceString:(id)arg1;
- (void)setEventCategory:(unsigned long long)arg1;
- (void)setMinimumPeopleCount:(unsigned long long)arg1;
- (void)setMustContainMePerson:(bool)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
