
@interface MTSound : NSObject <MTDictionarySerializable, NAEquatable, NSCopying, NSSecureCoding> {
    NSNumber * _mediaItemIdentifier;
    unsigned long long  _soundType;
    NSNumber * _soundVolume;
    NSString * _toneIdentifier;
    NSString * _vibrationIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *mediaItemIdentifier;
@property (nonatomic, readonly) unsigned long long soundType;
@property (nonatomic, readonly) NSNumber *soundVolume;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *toneIdentifier;
@property (nonatomic, readonly) NSString *vibrationIdentifier;

+ (long long)_alertTypeForCategory:(unsigned long long)arg1;
+ (id)_loadDefaultAlarmSound;
+ (id)_loadDefaultTimerSound;
+ (void)_saveDefaultAlarmSound:(id)arg1;
+ (void)_saveDefaultTimerSound:(id)arg1;
+ (id)defaultSoundForCategory:(unsigned long long)arg1;
+ (id)descriptionForCategory:(unsigned long long)arg1;
+ (void)setDefaultSound:(id)arg1 forCategory:(unsigned long long)arg2;
+ (id)songSoundWithIdentifier:(id)arg1 vibrationIdentifier:(id)arg2 volume:(id)arg3;
+ (bool)supportsSecureCoding;
+ (id)toneSoundWithIdentifier:(id)arg1 vibrationIdentifer:(id)arg2 volume:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaItemIdentifier:(id)arg1 vibrationIdentifier:(id)arg2 volume:(id)arg3;
- (id)initWithSound:(id)arg1 usingVolume:(id)arg2;
- (id)initWithToneIdentifier:(id)arg1 vibrationIdentifer:(id)arg2 volume:(id)arg3;
- (bool)interruptAudio;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSound:(id)arg1;
- (bool)isSilent;
- (id)mediaItemIdentifier;
- (id)previewWithCompletionHandler:(id /* block */)arg1;
- (id)soundByUpdatingVibrationIdentifier:(id)arg1;
- (id)soundByUpdatingVolume:(id)arg1;
- (unsigned long long)soundType;
- (id)soundVolume;
- (id)toneIdentifier;
- (id)unSound;
- (id)unSoundForCategory:(unsigned long long)arg1;
- (void)updatePreview:(id)arg1;
- (id)vibrationIdentifier;

@end
