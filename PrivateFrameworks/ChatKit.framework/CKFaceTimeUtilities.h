
@interface CKFaceTimeUtilities : NSObject

+ (void)initializeCachedValues;
+ (bool)isDirectTelephonyAvailable;
+ (bool)isFaceTimeAudioAvailable:(id)arg1;
+ (bool)isFaceTimeVideoAvailable:(id)arg1;
+ (bool)isGroupFaceTimeSupported;
+ (bool)isTelephonyAvailable;
+ (void)showCallControlsForConversation:(id)arg1;

@end
