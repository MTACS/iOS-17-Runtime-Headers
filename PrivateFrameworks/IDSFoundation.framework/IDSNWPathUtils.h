
@interface IDSNWPathUtils : NSObject

+ (id)sharedInstance;

- (void)dealloc;
- (bool)filterVirtualInterfaces:(char *)arg1;
- (id)getDefaultPath;
- (id)init;
- (bool)isVoWiFiInterface:(char *)arg1;

@end
