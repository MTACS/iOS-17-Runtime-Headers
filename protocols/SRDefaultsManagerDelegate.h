
@protocol SRDefaultsManagerDelegate <NSObject>

@required

- (NSString *)client;
- (void)didUpdateDefaults;
- (NSLocale *)locale;

@end
