
@interface _AFAudioSessionCoordinationSnapshotMutation : NSObject <AFAudioSessionCoordinationSnapshotMutating> {
    AFAudioSessionCoordinationSnapshot * _base;
    NSDateInterval * _currentOrUpNextDateInterval;
    bool  _isAudioSessionActive;
    NSArray * _localActiveAssertionContexts;
    AFAudioSessionCoordinationDeviceInfo * _localDevice;
    NSArray * _localPendingAssertionContexts;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasCurrentOrUpNextDateInterval : 1; 
        unsigned int hasIsAudioSessionActive : 1; 
        unsigned int hasLocalActiveAssertionContexts : 1; 
        unsigned int hasLocalPendingAssertionContexts : 1; 
        unsigned int hasRemoteActiveAssertionContexts : 1; 
        unsigned int hasRemotePendingAssertionContexts : 1; 
        unsigned int hasLocalDevice : 1; 
        unsigned int hasRemoteQualifiedInRangeDevices : 1; 
        unsigned int hasRemoteQualifiedOutOfRangeDevices : 1; 
        unsigned int hasRemoteDisqualifiedDevices : 1; 
    }  _mutationFlags;
    NSArray * _remoteActiveAssertionContexts;
    NSArray * _remoteDisqualifiedDevices;
    NSArray * _remotePendingAssertionContexts;
    NSArray * _remoteQualifiedInRangeDevices;
    NSArray * _remoteQualifiedOutOfRangeDevices;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getCurrentOrUpNextDateInterval;
- (bool)getIsAudioSessionActive;
- (id)getLocalActiveAssertionContexts;
- (id)getLocalDevice;
- (id)getLocalPendingAssertionContexts;
- (id)getRemoteActiveAssertionContexts;
- (id)getRemoteDisqualifiedDevices;
- (id)getRemotePendingAssertionContexts;
- (id)getRemoteQualifiedInRangeDevices;
- (id)getRemoteQualifiedOutOfRangeDevices;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setCurrentOrUpNextDateInterval:(id)arg1;
- (void)setIsAudioSessionActive:(bool)arg1;
- (void)setLocalActiveAssertionContexts:(id)arg1;
- (void)setLocalDevice:(id)arg1;
- (void)setLocalPendingAssertionContexts:(id)arg1;
- (void)setRemoteActiveAssertionContexts:(id)arg1;
- (void)setRemoteDisqualifiedDevices:(id)arg1;
- (void)setRemotePendingAssertionContexts:(id)arg1;
- (void)setRemoteQualifiedInRangeDevices:(id)arg1;
- (void)setRemoteQualifiedOutOfRangeDevices:(id)arg1;

@end
