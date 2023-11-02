
@interface _SOTimersSnapshotMutation : NSObject <SOTimersSnapshotMutating> {
    SOTimersSnapshot * _base;
    NSDate * _date;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasDate : 1; 
        unsigned int hasTimersByID : 1; 
    }  _mutationFlags;
    NSDictionary * _timersByID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getDate;
- (id)getTimersByID;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setDate:(id)arg1;
- (void)setTimersByID:(id)arg1;

@end
