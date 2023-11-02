
@interface _AFAudioPlaybackRequestMutation : NSObject <AFAudioPlaybackRequestMutating> {
    NSString * _UUID;
    AFAudioPlaybackRequest * _base;
    double  _fadeInDuration;
    double  _fadeOutDuration;
    NSString * _hapticLibraryKey;
    NSData * _itemData;
    NSURL * _itemURL;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasItemURL : 1; 
        unsigned int hasItemData : 1; 
        unsigned int hasNumberOfLoops : 1; 
        unsigned int hasVolume : 1; 
        unsigned int hasFadeInDuration : 1; 
        unsigned int hasFadeOutDuration : 1; 
        unsigned int hasUserInfo : 1; 
        unsigned int hasHapticLibraryKey : 1; 
        unsigned int hasUUID : 1; 
    }  _mutationFlags;
    long long  _numberOfLoops;
    NSDictionary * _userInfo;
    float  _volume;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)getFadeInDuration;
- (double)getFadeOutDuration;
- (id)getHapticLibraryKey;
- (id)getItemData;
- (id)getItemURL;
- (long long)getNumberOfLoops;
- (id)getUUID;
- (id)getUserInfo;
- (float)getVolume;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setFadeInDuration:(double)arg1;
- (void)setFadeOutDuration:(double)arg1;
- (void)setHapticLibraryKey:(id)arg1;
- (void)setItemData:(id)arg1;
- (void)setItemURL:(id)arg1;
- (void)setNumberOfLoops:(long long)arg1;
- (void)setUUID:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setVolume:(float)arg1;

@end
