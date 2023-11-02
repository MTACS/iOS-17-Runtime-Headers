
@interface CBUtil : NSObject

+ (id)decodeApplePayloadByteStream:(id)arg1;
+ (id)encodeApplePayloadByteStream:(id)arg1;
+ (id)getBluetoothDebugSettingString:(struct __CFString { }*)arg1 InKey:(struct __CFString { }*)arg2;
+ (bool)isAppleVID:(unsigned short)arg1 forVIDSrc:(unsigned char)arg2;
+ (bool)isDeviceSupported:(id)arg1;
+ (bool)isDeviceSupportedOnWatchOS:(id)arg1;
+ (bool)isDeviceSupportedOnXROS:(id)arg1;
+ (bool)isDeviceSupportedWithType:(unsigned char)arg1 VIDsrc:(unsigned char)arg2 VID:(unsigned short)arg3 PID:(unsigned short)arg4;
+ (bool)isInternalBuild;
+ (bool)isWatchOS;
+ (bool)isXROS;
+ (id)preSSPPairingCodeToString:(long long)arg1;
+ (long long)preSSPStringToPairingCode:(id)arg1;
+ (void)setBluetoothDebugSetting:(struct __CFString { }*)arg1 InKey:(struct __CFString { }*)arg2 InValue:(void*)arg3;

@end
