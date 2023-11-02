
@interface _AFHomeAnnouncementMutation : NSObject <AFHomeAnnouncementMutating> {
    AFHomeAnnouncement * _base;
    NSDate * _finishedDate;
    unsigned long long  _finishedHostTime;
    NSString * _identifier;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasIdentifier : 1; 
        unsigned int hasStartedHostTime : 1; 
        unsigned int hasFinishedHostTime : 1; 
        unsigned int hasStartedDate : 1; 
        unsigned int hasFinishedDate : 1; 
    }  _mutationFlags;
    NSDate * _startedDate;
    unsigned long long  _startedHostTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getFinishedDate;
- (unsigned long long)getFinishedHostTime;
- (id)getIdentifier;
- (id)getStartedDate;
- (unsigned long long)getStartedHostTime;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setFinishedDate:(id)arg1;
- (void)setFinishedHostTime:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStartedDate:(id)arg1;
- (void)setStartedHostTime:(unsigned long long)arg1;

@end
