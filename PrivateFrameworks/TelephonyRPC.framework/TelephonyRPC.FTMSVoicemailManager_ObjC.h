
@interface TelephonyRPC.FTMSVoicemailManager_ObjC : NSObject {
    void allVoicemail;
    void cancellables;
}

@property (nonatomic, copy) NSArray *allVoicemail;

+ (id)shared;

- (void).cxx_destruct;
- (id)allVoicemail;
- (id)init;
- (void)markVoicemailAsRead:(id)arg1;
- (void)setAllVoicemail:(id)arg1;
- (void)trashVoicemail:(id)arg1;

@end
