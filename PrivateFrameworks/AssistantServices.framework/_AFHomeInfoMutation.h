
@interface _AFHomeInfoMutation : NSObject <AFHomeInfoMutating> {
    bool  _activityNotificationsEnabledForPersonalRequests;
    AFHomeInfo * _base;
    NSUUID * _homeIdentifier;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasHomeIdentifier : 1; 
        unsigned int hasActivityNotificationsEnabledForPersonalRequests : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)getActivityNotificationsEnabledForPersonalRequests;
- (id)getHomeIdentifier;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setActivityNotificationsEnabledForPersonalRequests:(bool)arg1;
- (void)setHomeIdentifier:(id)arg1;

@end
