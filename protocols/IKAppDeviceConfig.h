
@protocol IKAppDeviceConfig <NSObject>

@required

- (bool)isTimeZoneSet;
- (unsigned long long)preferredVideoFormat;
- (unsigned long long)preferredVideoPreviewFormat;
- (struct CGSize { double x1; double x2; })screenSize;
- (NSString *)storeFrontCountryCode;
- (NSString *)systemLanguage;
- (NSTimeZone *)timeZone;

@optional

- (NSString *)bundleIdentifier;

@end
