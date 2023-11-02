
@interface _SVXAlarmAndTimerFiringContextMutation : NSObject <SVXAlarmAndTimerFiringContextMutating> {
    SVXAlarmAndTimerFiringContext * _baseModel;
    bool  _hasOtherRunningTimers;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasOrderedFiringAlarms : 1; 
        unsigned int hasOrderedFiringTimers : 1; 
        unsigned int hasHasOtherRunningTimers : 1; 
    }  _mutationFlags;
    NSOrderedSet * _orderedFiringAlarms;
    NSOrderedSet * _orderedFiringTimers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setHasOtherRunningTimers:(bool)arg1;
- (void)setOrderedFiringAlarms:(id)arg1;
- (void)setOrderedFiringTimers:(id)arg1;

@end
