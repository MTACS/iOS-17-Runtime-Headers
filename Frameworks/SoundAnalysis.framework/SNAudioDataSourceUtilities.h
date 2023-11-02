
@interface SNAudioDataSourceUtilities : NSObject

+ (id)applyUserDefaultOverridesToAudioConfiguration:(id)arg1;
+ (id)audioQueueConfigurationWithAudioConfiguration:(id)arg1;
+ (id)builtInMicrophoneDeviceUIDForSession:(id)arg1;
+ (id)defaultAudioConfigurationForCurrentHW;
+ (id)defaultAudioConfigurationForProductType:(int)arg1;
+ (void)enableAlwaysOnAudioRouting:(void*)arg1;
+ (void)setChannelMap:(id)arg1 onQueue:(void*)arg2 session:(id)arg3;

- (id)init;

@end
