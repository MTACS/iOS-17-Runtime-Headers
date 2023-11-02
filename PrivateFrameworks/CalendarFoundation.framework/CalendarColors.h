
@interface CalendarColors : NSObject

+ (void)_bootstrapColorNameMapping;
+ (void)_rebuildColors;
+ (id)birthdayCalendarColor;
+ (id)colorForName:(id)arg1;
+ (id)colorNamesOrderedForAssignment;
+ (int)countOfColor:(id)arg1 inArray:(id)arg2;
+ (id)defaultCalendarColorNames;
+ (id)facebookCalendarColor;
+ (id)grayColor;
+ (void)initialize;
+ (id)localizedColorNameForColorName:(id)arg1;
+ (id)nameOfColor:(id)arg1;
+ (id)symbolicColorForNewCalendarWithExistingSymbolicNames:(id)arg1;
+ (id)textColorForName:(id)arg1;

@end
