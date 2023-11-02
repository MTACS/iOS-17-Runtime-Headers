
@interface CNPropertyGroupDateItem : CNPropertyGroupItem

+ (id)calendarForLabel:(id)arg1;
+ (id)dateDisplayStringFromComponents:(id)arg1;
+ (id)emptyValueForLabel:(id)arg1;
+ (id)initialValueForLabel:(id)arg1 group:(id)arg2;
+ (void)initialize;
+ (bool)isEmptyDateComponents:(id)arg1;
+ (id)localeAndCalendarPairFromDateComponents:(id)arg1;
+ (id)propertyGroupItemWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3;

- (id)bestValue:(id)arg1;
- (id)defaultActionURL;
- (id)displayStringForValue:(id)arg1;
- (bool)isEmpty;
- (bool)isEquivalentToItem:(id)arg1;
- (bool)isValidValue:(id)arg1;
- (id)normalizedValue;
- (id)placeholderString;
- (id)valueForDisplayString:(id)arg1;

@end
