
@interface STKToneAlertSound : STKBaseSound <STKSound> {
    TLAlert * _alert;
    long long  _alertType;
    bool  _finishedSoundNormally;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reallyPlaySound;
- (void)_reallyStopSound;
- (id)initWithType:(long long)arg1 duration:(double)arg2;

@end
