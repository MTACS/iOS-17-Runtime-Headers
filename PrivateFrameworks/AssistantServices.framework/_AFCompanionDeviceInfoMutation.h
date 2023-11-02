
@interface _AFCompanionDeviceInfoMutation : NSObject <AFCompanionDeviceInfoMutating> {
    NSString * _aceHost;
    NSString * _assistantID;
    AFCompanionDeviceInfo * _base;
    NSString * _idsIdentifier;
    bool  _meDevice;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasAssistantID : 1; 
        unsigned int hasSpeechID : 1; 
        unsigned int hasIdsIdentifier : 1; 
        unsigned int hasProductPrefix : 1; 
        unsigned int hasAceHost : 1; 
        unsigned int hasSyncMetadata : 1; 
        unsigned int hasSyncMetadataCapability : 1; 
        unsigned int hasPeerToPeerHandoffCapability : 1; 
        unsigned int hasMuxSupportCapability : 1; 
        unsigned int hasMeDevice : 1; 
        unsigned int hasSiriLanguage : 1; 
    }  _mutationFlags;
    bool  _muxSupportCapability;
    bool  _peerToPeerHandoffCapability;
    NSString * _productPrefix;
    NSString * _siriLanguage;
    NSString * _speechID;
    NSDictionary * _syncMetadata;
    bool  _syncMetadataCapability;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getAceHost;
- (id)getAssistantID;
- (id)getIdsIdentifier;
- (bool)getMeDevice;
- (bool)getMuxSupportCapability;
- (bool)getPeerToPeerHandoffCapability;
- (id)getProductPrefix;
- (id)getSiriLanguage;
- (id)getSpeechID;
- (id)getSyncMetadata;
- (bool)getSyncMetadataCapability;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setAceHost:(id)arg1;
- (void)setAssistantID:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMeDevice:(bool)arg1;
- (void)setMuxSupportCapability:(bool)arg1;
- (void)setPeerToPeerHandoffCapability:(bool)arg1;
- (void)setProductPrefix:(id)arg1;
- (void)setSiriLanguage:(id)arg1;
- (void)setSpeechID:(id)arg1;
- (void)setSyncMetadata:(id)arg1;
- (void)setSyncMetadataCapability:(bool)arg1;

@end
