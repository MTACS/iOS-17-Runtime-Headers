
@interface ANDevice : NSObject

+ (int)deviceClass;
+ (bool)isAudioAccessory;
+ (bool)isPad;
+ (bool)isPhone;

@end
