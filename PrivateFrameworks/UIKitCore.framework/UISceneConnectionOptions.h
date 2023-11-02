
@interface UISceneConnectionOptions : NSObject {
    NSSet * _cleanupBlocks;
    FBSScene * _fbsScene;
    NSDictionary * _launchOptionsDictionary;
    FBSSceneSpecification * _specification;
}

@property (nonatomic, readonly, copy) NSSet *URLContexts;
@property (nonatomic, readonly) FBSScene *_fbsScene;
@property (nonatomic, readonly, copy) NSSet *_itemProviderCollections;
@property (nonatomic, readonly) NSDictionary *_launchOptionsDictionary;
@property (nonatomic, readonly) FBSSceneSpecification *_specification;
@property (nonatomic, readonly) CKShareMetadata *cloudKitShareMetadata;
@property (nonatomic, readonly) NSString *handoffUserActivityType;
@property (nonatomic, readonly) UNNotificationResponse *notificationResponse;
@property (nonatomic, readonly) UIApplicationShortcutItem *shortcutItem;
@property (nonatomic, readonly) NSString *sourceApplication;
@property (nonatomic, readonly, copy) NSSet *userActivities;

- (void).cxx_destruct;
- (id)URLContexts;
- (id)_fbsScene;
- (id)_initWithConnectionOptionsContext:(id)arg1 fbsScene:(id)arg2 specification:(id)arg3;
- (id)_itemProviderCollections;
- (id)_launchOptionsDictionary;
- (id)_specification;
- (id)cloudKitShareMetadata;
- (id)description;
- (id)handoffUserActivityType;
- (id)notificationResponse;
- (void)performPostConnectionCleanup;
- (id)shortcutItem;
- (id)sourceApplication;
- (id)userActivities;

@end
