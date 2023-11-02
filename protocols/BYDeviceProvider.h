
@protocol BYDeviceProvider <NSObject>

@required

- (NSString *)deviceClass;
- (bool)hasHomeButton;
- (long long)size;
- (long long)type;

@end
