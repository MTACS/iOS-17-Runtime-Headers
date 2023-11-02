
@interface CUIKEventStoreEditor : NSObject <CUIKEditor> {
    NSObject<OS_os_log> * _logHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *logHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_saveEvent:(id)arg1 span:(long long)arg2 commit:(bool)arg3 error:(id*)arg4;
- (bool)commitEventForOOPModificationRecording:(id)arg1 error:(id*)arg2;
- (void)deleteCalendar:(id)arg1 forEntityType:(unsigned long long)arg2;
- (bool)deleteEvent:(id)arg1 span:(long long)arg2 error:(id*)arg3;
- (void)deleteEvents:(id)arg1 span:(long long)arg2;
- (id)logHandle;
- (bool)saveCalendar:(id)arg1 error:(id*)arg2;
- (void)saveChangesToEvents:(id)arg1 span:(long long)arg2;
- (bool)saveEvent:(id)arg1 span:(long long)arg2 error:(id*)arg3;
- (bool)saveEventForOOPModificationRecording:(id)arg1 span:(long long)arg2 error:(id*)arg3;
- (bool)saveNewEvents:(id)arg1 commit:(bool)arg2 error:(id*)arg3;

@end
