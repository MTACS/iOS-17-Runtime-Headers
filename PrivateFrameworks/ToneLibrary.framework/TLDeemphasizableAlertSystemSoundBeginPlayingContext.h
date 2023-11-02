
@interface TLDeemphasizableAlertSystemSoundBeginPlayingContext : NSObject {
    TLAlert * _alert;
    TLAlertSystemSoundContext * _alertSystemSoundContext;
    TLSystemSound * _sound;
    NSString * _toneIdentifierForDeemphasizingAlert;
}

@property (nonatomic, retain) TLAlert *alert;
@property (nonatomic, retain) TLAlertSystemSoundContext *alertSystemSoundContext;
@property (nonatomic, retain) TLSystemSound *sound;
@property (nonatomic, copy) NSString *toneIdentifierForDeemphasizingAlert;

- (void).cxx_destruct;
- (id)alert;
- (id)alertSystemSoundContext;
- (void)setAlert:(id)arg1;
- (void)setAlertSystemSoundContext:(id)arg1;
- (void)setSound:(id)arg1;
- (void)setToneIdentifierForDeemphasizingAlert:(id)arg1;
- (id)sound;
- (id)toneIdentifierForDeemphasizingAlert;

@end
