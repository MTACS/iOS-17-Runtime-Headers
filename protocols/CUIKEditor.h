
@protocol CUIKEditor <NSObject>

@required

- (bool)commitEventForOOPModificationRecording:(EKEvent *)arg1 error:(id*)arg2;
- (void)deleteCalendar:(EKCalendar *)arg1 forEntityType:(unsigned long long)arg2;
- (bool)deleteEvent:(EKEvent *)arg1 span:(long long)arg2 error:(id*)arg3;
- (void)deleteEvents:(NSSet *)arg1 span:(long long)arg2;
- (bool)saveCalendar:(EKCalendar *)arg1 error:(id*)arg2;
- (void)saveChangesToEvents:(NSSet *)arg1 span:(long long)arg2;
- (bool)saveEvent:(EKEvent *)arg1 span:(long long)arg2 error:(id*)arg3;
- (bool)saveEventForOOPModificationRecording:(EKEvent *)arg1 span:(long long)arg2 error:(id*)arg3;
- (bool)saveNewEvents:(NSSet *)arg1 commit:(bool)arg2 error:(id*)arg3;

@end
