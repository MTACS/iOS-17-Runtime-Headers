
@interface _AFExperimentStateMutation : NSObject <AFExperimentStateMutating> {
    AFExperimentState * _base;
    bool  _didEnd;
    NSString * _endingGroupIdentifier;
    NSDate * _lastSyncDate;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasLastSyncDate : 1; 
        unsigned int hasDidEnd : 1; 
        unsigned int hasEndingGroupIdentifier : 1; 
        unsigned int hasVersion : 1; 
    }  _mutationFlags;
    NSString * _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)getDidEnd;
- (id)getEndingGroupIdentifier;
- (id)getLastSyncDate;
- (id)getVersion;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setDidEnd:(bool)arg1;
- (void)setEndingGroupIdentifier:(id)arg1;
- (void)setLastSyncDate:(id)arg1;
- (void)setVersion:(id)arg1;

@end
