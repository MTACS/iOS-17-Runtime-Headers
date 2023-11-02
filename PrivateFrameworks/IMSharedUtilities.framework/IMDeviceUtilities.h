
@interface IMDeviceUtilities : NSObject

+ (bool)IMDeviceIsChinaRegion;
+ (bool)IMDeviceIsGreenTea;
+ (bool)IMDeviceIsIndiaRegion;
+ (bool)IMDeviceRegionIsEligibleToBeForcedIntoFilteringUnknownSender;
+ (bool)IMSupportsASTC;
+ (bool)deviceIsLockedDown;
+ (void)setSupportsiMessageJunk:(bool)arg1;
+ (bool)supportsBusinessChat;
+ (bool)supportsDataDetectors;
+ (bool)supportsFaceTime;
+ (bool)supportsFocus;
+ (bool)supportsNameAndPhoto;
+ (bool)supportsScreenEffects;
+ (bool)supportsSharedWithYou;
+ (bool)supportsSpotlight;
+ (bool)supportsiMessageJunk;

@end
