
@interface _AFCallStateSnapshotMutation : NSObject <AFCallStateSnapshotMutating> {
    AFCallStateSnapshot * _base;
    unsigned long long  _callState;
    bool  _isDropInCall;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasCallState : 1; 
        unsigned int hasOnSpeaker : 1; 
        unsigned int hasIsDropInCall : 1; 
    }  _mutationFlags;
    bool  _onSpeaker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)getCallState;
- (bool)getIsDropInCall;
- (bool)getOnSpeaker;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setCallState:(unsigned long long)arg1;
- (void)setIsDropInCall:(bool)arg1;
- (void)setOnSpeaker:(bool)arg1;

@end
