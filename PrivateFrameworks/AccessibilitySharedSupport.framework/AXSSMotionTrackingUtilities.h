
@interface AXSSMotionTrackingUtilities : NSObject

+ (bool)_axss_iAPInterfaceExistsForHIDDeviceService:(unsigned int)arg1;
+ (bool)axss_HIDDeviceIsMFiAuthenticated:(id)arg1;
+ (id)axss_frequencyElementMatchingDict;
+ (id)axss_statusElementMatchingDict;
+ (id)axss_xPositionElementMatchingDict;
+ (id)axss_yPositionElementMatchingDict;

@end
