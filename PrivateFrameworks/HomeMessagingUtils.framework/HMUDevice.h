
@interface HMUDevice : NSObject

+ (int)deviceClass;
+ (bool)isAccessory;
+ (bool)isAppleTV;
+ (bool)isAudioAccessory;
+ (bool)isPad;
+ (bool)isPhone;

@end
