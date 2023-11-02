
@interface SearchUIMediaUtilities : NSObject

+ (id)appsThatSupportSearchIntents;
+ (bool)bundleIdentifierSupportsOpenIntent:(id)arg1;
+ (bool)bundleIdentifierSupportsPlayIntent:(id)arg1;
+ (id)cardSectionsForListenToCardSection:(id)arg1;
+ (id)fallbackPunchoutWithMetadata:(id)arg1 forBundleIdentifier:(id)arg2;
+ (id)generateAppsThatSupportSearchIntents;
+ (void)initializeQueuesAndNotifications;
+ (id)mediaDestinationsForMediaMetadata:(id)arg1;
+ (id)mediaSearchForMetadata:(id)arg1;
+ (void)predictionForMediaMetadata:(id)arg1 completion:(id /* block */)arg2;
+ (void)prewarmMediaLibrary;
+ (void)resetMediaApps;
+ (id)supportedIntentsForApp:(id)arg1;

@end
