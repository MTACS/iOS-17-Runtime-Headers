
@protocol TSUMultipleChoiceListChoiceProviding

@required

- (bool)booleanAtIndex:(unsigned long long)arg1;
- (NSArray *)choices;
- (NSDate *)dateAtIndex:(unsigned long long)arg1;
- (NSString *)displayStringAtIndex:(unsigned long long)arg1;
- (bool)isEqualToChoices:(id <TSUMultipleChoiceListChoiceProviding>)arg1;
- (double)numberAtIndex:(unsigned long long)arg1;
- (NSString *)stringAtIndex:(unsigned long long)arg1;
- (int)valueTypeOfItemAtIndex:(unsigned long long)arg1;

@end
