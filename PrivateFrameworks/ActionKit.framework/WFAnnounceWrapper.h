
@interface WFAnnounceWrapper : NSObject {
    ANAnnounce * _announce;
}

@property (nonatomic, readonly) ANAnnounce *announce;

+ (id)afPreferencesLanguageCode;
+ (id)currentSiriVoiceVSAssetName;
+ (id)sharedAnnouncementsDirectoryURL;

- (void).cxx_destruct;
- (id)announce;
- (id)init;
- (void)invalidate;
- (void)prewarmWithHandler:(id /* block */)arg1;
- (void)requestAnnouncementWithAudioFileURL:(id)arg1 homeAreaDescriptor:(id)arg2 completionHandler:(id /* block */)arg3;

@end
