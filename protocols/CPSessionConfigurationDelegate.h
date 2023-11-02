
@protocol CPSessionConfigurationDelegate <NSObject>

@optional

- (void)sessionConfiguration:(CPSessionConfiguration *)arg1 contentStyleChanged:(unsigned long long)arg2;
- (void)sessionConfiguration:(CPSessionConfiguration *)arg1 limitedUserInterfacesChanged:(unsigned long long)arg2;

@end
