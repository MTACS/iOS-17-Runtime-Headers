
@interface _AFHomeAnnouncementSnapshotMutation : NSObject <AFHomeAnnouncementSnapshotMutating> {
    AFHomeAnnouncementSnapshot * _base;
    AFHomeAnnouncement * _lastPlayedAnnouncement;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasState : 1; 
        unsigned int hasLastPlayedAnnouncement : 1; 
    }  _mutationFlags;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getLastPlayedAnnouncement;
- (unsigned long long)getState;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setLastPlayedAnnouncement:(id)arg1;
- (void)setState:(unsigned long long)arg1;

@end
