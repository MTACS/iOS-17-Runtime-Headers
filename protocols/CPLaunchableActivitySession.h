
@protocol CPLaunchableActivitySession <NSObject>

@required

- (NSUUID *)UUID;
- (TUConversationActivity *)activity;
- (NSString *)persistentSceneIdentifier;

@optional

- (void)associateSceneWithPersistentIdentifier:(NSString *)arg1;

@end
