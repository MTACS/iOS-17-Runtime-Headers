
@interface PFClientUtil : NSObject

+ (id)clientBundleVersion;
+ (id)clientIdentifier;
+ (id)clientIdentifierHeader;
+ (bool)isAppRemovalService;
+ (bool)isPodcastsApp;
+ (bool)isPodcastsKit;
+ (bool)isRunningOnHomepod;
+ (bool)isRunningOnInternalOS;
+ (bool)isRunningOnTV;
+ (bool)isRunningOniPad;
+ (id)mediaApiClientIdentifier;
+ (id)mediaApiClientVersion;
+ (bool)platformSupportsVideo;
+ (bool)supportsDownloads;
+ (bool)supportsGUI;
+ (bool)supportsImageStore;
+ (bool)supportsMetrics;

@end
