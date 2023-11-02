
@interface _AFClockTimerSnapshotMutation : NSObject <AFClockTimerSnapshotMutating> {
    AFClockTimerSnapshot * _base;
    NSDate * _date;
    unsigned long long  _generation;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasGeneration : 1; 
        unsigned int hasDate : 1; 
        unsigned int hasTimersByID : 1; 
        unsigned int hasNotifiedFiringTimerIDs : 1; 
    }  _mutationFlags;
    NSOrderedSet * _notifiedFiringTimerIDs;
    NSDictionary * _timersByID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getDate;
- (unsigned long long)getGeneration;
- (id)getNotifiedFiringTimerIDs;
- (id)getTimersByID;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setDate:(id)arg1;
- (void)setGeneration:(unsigned long long)arg1;
- (void)setNotifiedFiringTimerIDs:(id)arg1;
- (void)setTimersByID:(id)arg1;

@end
