
@interface CHDefaultHapticDeviceCapability : NSObject <CHHapticDeviceCapability> {
    bool  _supportsAudio;
    bool  _supportsHaptics;
}

@property (readonly) unsigned long long maximumNumberOfAudioChannels;
@property (readonly) unsigned long long maximumNumberOfHapticChannels;
@property (readonly) bool supportsAudio;
@property (readonly) bool supportsHaptics;

- (id)attributesForDynamicParameter:(id)arg1 error:(id*)arg2;
- (id)attributesForEventParameter:(id)arg1 eventType:(id)arg2 error:(id*)arg3;
- (float)defaultValueForDynamicParameter:(id)arg1;
- (float)defaultValueForEventParameter:(id)arg1 eventType:(id)arg2;
- (id)init;
- (id)initPrivate;
- (unsigned long long)maximumNumberOfAudioChannels;
- (unsigned long long)maximumNumberOfHapticChannels;
- (float)maximumValueForDynamicParameter:(id)arg1;
- (float)maximumValueForEventParameter:(id)arg1;
- (float)minimumValueForDynamicParameter:(id)arg1;
- (float)minimumValueForEventParameter:(id)arg1;
- (bool)supportsAudio;
- (bool)supportsHaptics;

@end
