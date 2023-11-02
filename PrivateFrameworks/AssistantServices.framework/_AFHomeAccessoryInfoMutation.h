
@interface _AFHomeAccessoryInfoMutation : NSObject <AFHomeAccessoryInfoMutating> {
    NSString * _assistantIdentifier;
    AFHomeAccessoryInfo * _base;
    NSString * _categoryType;
    bool  _hasActiveThirdPartyMusicSubscription;
    bool  _isSpeaker;
    NSUUID * _loggingUniqueIdentifier;
    NSString * _manufacturer;
    NSString * _model;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasUniqueIdentifier : 1; 
        unsigned int hasLoggingUniqueIdentifier : 1; 
        unsigned int hasName : 1; 
        unsigned int hasModel : 1; 
        unsigned int hasRoomName : 1; 
        unsigned int hasAssistantIdentifier : 1; 
        unsigned int hasIsSpeaker : 1; 
        unsigned int hasHasActiveThirdPartyMusicSubscription : 1; 
        unsigned int hasManufacturer : 1; 
        unsigned int hasCategoryType : 1; 
        unsigned int hasSchemaCategoryType : 1; 
    }  _mutationFlags;
    NSString * _name;
    NSString * _roomName;
    long long  _schemaCategoryType;
    NSUUID * _uniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getAssistantIdentifier;
- (id)getCategoryType;
- (bool)getHasActiveThirdPartyMusicSubscription;
- (bool)getIsSpeaker;
- (id)getLoggingUniqueIdentifier;
- (id)getManufacturer;
- (id)getModel;
- (id)getName;
- (id)getRoomName;
- (long long)getSchemaCategoryType;
- (id)getUniqueIdentifier;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setAssistantIdentifier:(id)arg1;
- (void)setCategoryType:(id)arg1;
- (void)setHasActiveThirdPartyMusicSubscription:(bool)arg1;
- (void)setIsSpeaker:(bool)arg1;
- (void)setLoggingUniqueIdentifier:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setSchemaCategoryType:(long long)arg1;
- (void)setUniqueIdentifier:(id)arg1;

@end
