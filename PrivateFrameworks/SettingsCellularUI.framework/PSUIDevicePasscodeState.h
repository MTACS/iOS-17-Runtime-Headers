
@interface PSUIDevicePasscodeState : NSObject

+ (id)sharedInstance;

- (id)getLogger;
- (id)init;
- (id)initPrivate;
- (bool)isPasscodeSet;

@end
