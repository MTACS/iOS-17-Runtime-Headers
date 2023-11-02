
@interface CALNNullRemoteMutator : NSObject <CALNRemoteMutator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (bool)deleteEvent:(id)arg1 withSpan:(long long)arg2;
- (void)setParticipantStatus:(long long)arg1 span:(long long)arg2 event:(id)arg3;
- (void)setSnoozeTimeInterval:(double)arg1 alarm:(id)arg2 calendarItem:(id)arg3;

@end
