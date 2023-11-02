
@protocol UIManagedConfigurationRestrictableActivity

@required

- (bool)isContentManaged;
- (void)setIsContentManaged:(bool)arg1;
- (void)setSourceApplicationBundleID:(NSString *)arg1;
- (NSString *)sourceApplicationBundleID;

@end
