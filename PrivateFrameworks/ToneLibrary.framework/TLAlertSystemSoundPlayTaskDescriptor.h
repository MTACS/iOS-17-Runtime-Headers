
@interface TLAlertSystemSoundPlayTaskDescriptor : NSObject {
    TLAlert * _alert;
    TLAlertSystemSoundContext * _alertSystemSoundContext;
    TLSystemSound * _sound;
}

@property (nonatomic, readonly) TLAlert *alert;
@property (nonatomic, readonly) TLAlertSystemSoundContext *alertSystemSoundContext;
@property (nonatomic, readonly) TLSystemSound *sound;

- (void).cxx_destruct;
- (id)alert;
- (id)alertSystemSoundContext;
- (id)initWithAlert:(id)arg1 sound:(id)arg2 alertSystemSoundContext:(id)arg3;
- (id)sound;

@end
