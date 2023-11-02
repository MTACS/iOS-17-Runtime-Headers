
@interface CSAudioInjectionServices : NSObject

+ (bool)audioInjectionEnabled;
+ (void)connectDeviceWithUUID:(id)arg1 completion:(id /* block */)arg2;
+ (void)createAudioInjectionDeviceWithType:(long long)arg1 deviceName:(id)arg2 deviceID:(id)arg3 productID:(id)arg4 completion:(id /* block */)arg5;
+ (void)disconnectDeviceWithUUID:(id)arg1 completion:(id /* block */)arg2;
+ (id)getAudioInjectionXPCConnection;
+ (void)injectAudio:(id)arg1 toDeviceWithUUID:(id)arg2 completion:(id /* block */)arg3;
+ (void)injectAudio:(id)arg1 toDeviceWithUUID:(id)arg2 withNumChannels:(unsigned long long)arg3 completion:(id /* block */)arg4;
+ (void)injectAudio:(id)arg1 toDeviceWithUUID:(id)arg2 withNumChannels:(unsigned long long)arg3 withUserIntentOptions:(id)arg4 completion:(id /* block */)arg5;
+ (void)injectAudio:(id)arg1 toDeviceWithUUID:(id)arg2 withfadingTimeWindowLength:(unsigned long long)arg3 completion:(id /* block */)arg4;
+ (void)pingpong:(id)arg1 completion:(id /* block */)arg2;
+ (void)primaryInputDeviceUUIDWithCompletion:(id /* block */)arg1;
+ (bool)setAudioInjectionMode:(bool)arg1;

@end
