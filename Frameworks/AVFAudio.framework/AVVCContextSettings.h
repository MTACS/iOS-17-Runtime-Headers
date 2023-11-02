
@interface AVVCContextSettings : NSObject {
    NSString * _activationDeviceUID;
    long long  _activationMode;
    bool  _announceCallsEnabled;
}

@property (nonatomic, retain) NSString *activationDeviceUID;
@property (nonatomic) long long activationMode;
@property (nonatomic) bool announceCallsEnabled;

// Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio

- (void).cxx_destruct;
- (id)activationDeviceUID;
- (long long)activationMode;
- (bool)announceCallsEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithMode:(long long)arg1 deviceUID:(id)arg2;
- (void)setActivationDeviceUID:(id)arg1;
- (void)setActivationMode:(long long)arg1;
- (void)setAnnounceCallsEnabled:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech

- (id)debugDescription;

// Image: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition

- (id)debugDescription;

@end
