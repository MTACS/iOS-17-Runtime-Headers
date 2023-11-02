
@protocol HKCBDevice <NSObject>

@required

- (NSString *)firmwareVersion;
- (NSString *)identifier;
- (bool)isGuestPaired;
- (NSString *)name;

@end
