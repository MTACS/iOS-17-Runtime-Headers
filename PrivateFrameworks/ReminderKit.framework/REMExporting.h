
@interface REMExporting : NSObject

+ (id)_icsCalendarItemsFromReminders:(id)arg1 exportingOption:(long long)arg2;
+ (bool)_updateICSComponentWithReminder:(id)arg1 icsCalendarItem:(id)arg2;
+ (id)exportICSCalendarFromReminders:(id)arg1;
+ (id)exportICSCalendarFromReminders:(id)arg1 exportingOption:(long long)arg2;
+ (id)icsTodoFromReminder:(id)arg1;
+ (id)icsTodoFromReminder:(id)arg1 exportingOption:(long long)arg2;

@end
