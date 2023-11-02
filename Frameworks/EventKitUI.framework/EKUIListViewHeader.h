
@interface EKUIListViewHeader : NSObject

+ (bool)_isDateInCurrentYear:(id)arg1 currentYearStart:(id*)arg2 currentYearEnd:(id*)arg3 timeZone:(id)arg4;
+ (id)_stringForHeaderDate:(id)arg1 currentYearStart:(id*)arg2 currentYearEnd:(id*)arg3 timeZone:(id)arg4;
+ (id)headerWithTableView:(id)arg1 reuseIdentifier:(id)arg2 date:(id)arg3 timeZone:(id)arg4 currentYearStart:(id*)arg5 currentYearEnd:(id*)arg6;

@end
