
@interface CLSHolidayCalendarEventRuleTraits : NSObject {
    bool  _containsMePerson;
    unsigned long long  _locationTrait;
    unsigned long long  _numberOfPeople;
    unsigned long long  _peopleTrait;
}

@property (nonatomic) bool containsMePerson;
@property (nonatomic) unsigned long long locationTrait;
@property (nonatomic) unsigned long long numberOfPeople;
@property (nonatomic) unsigned long long peopleTrait;

- (bool)containsMePerson;
- (id)description;
- (id)init;
- (unsigned long long)locationTrait;
- (unsigned long long)numberOfPeople;
- (unsigned long long)peopleTrait;
- (void)setContainsMePerson:(bool)arg1;
- (void)setLocationTrait:(unsigned long long)arg1;
- (void)setNumberOfPeople:(unsigned long long)arg1;
- (void)setPeopleTrait:(unsigned long long)arg1;

@end
