
@protocol PSCloudSyncPopoverDelegate

@required

- (PSViewController *)controller;
- (bool)isCloudSyncEnabled;
- (void)setCloudSyncEnabled:(bool)arg1;
- (NSString *)syncMessage;
- (NSString *)syncTitle;

@end
