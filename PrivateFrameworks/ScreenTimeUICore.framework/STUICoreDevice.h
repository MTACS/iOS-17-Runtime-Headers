
@interface STUICoreDevice : NSObject

+ (bool)isMac;
+ (bool)isiPad;
+ (bool)isiPhone;
+ (bool)isiPodTouch;
+ (id)localizedModel;

@end
