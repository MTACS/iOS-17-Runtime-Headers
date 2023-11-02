
@interface TVRCPreferredDeviceManager : NSObject

+ (id)sharedInstance;

- (id)preferredDeviceIdentifier;
- (double)preferredDeviceSearchTimeout;
- (void)setPreferredDevice:(id)arg1;

@end
