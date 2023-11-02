
@interface _AFHomeAccessorySiriDataSharingPropagationLogEventMutation : NSObject <AFHomeAccessorySiriDataSharingPropagationLogEventMutating> {
    NSString * _accessoryIdentifier;
    NSString * _associatedChangeLogEventIdentifier;
    AFHomeAccessorySiriDataSharingPropagationLogEvent * _base;
    NSDate * _date;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasDate : 1; 
        unsigned int hasAccessoryIdentifier : 1; 
        unsigned int hasPropagationEvent : 1; 
        unsigned int hasPropagationEventReason : 1; 
        unsigned int hasAssociatedChangeLogEventIdentifier : 1; 
    }  _mutationFlags;
    long long  _propagationEvent;
    NSString * _propagationEventReason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getAccessoryIdentifier;
- (id)getAssociatedChangeLogEventIdentifier;
- (id)getDate;
- (long long)getPropagationEvent;
- (id)getPropagationEventReason;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setAccessoryIdentifier:(id)arg1;
- (void)setAssociatedChangeLogEventIdentifier:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setPropagationEvent:(long long)arg1;
- (void)setPropagationEventReason:(id)arg1;

@end
