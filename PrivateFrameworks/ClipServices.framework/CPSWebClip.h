
@interface CPSWebClip : NSObject {
    NSString * _applicationBundleIdentifier;
    unsigned long long  _bundleVersion;
    NSString * _fullAppCaption;
    NSString * _fullAppName;
    NSURL * _fullAppStoreURL;
    struct CGImage { } * _iconImage;
    NSString * _identifier;
    NSDate * _lastActivatedTime;
    NSURL * _pageURL;
    bool  _poweredBy;
    NSURL * _registeredURL;
    bool  _scenelessBackgroundLaunch;
    NSString * _temporaryIconPath;
    NSString * _title;
    long long  _webClipType;
}

@property (nonatomic, readonly) NSDictionary *_dictionaryRepresentation;
@property (nonatomic, copy) NSString *_temporaryIconPath;
@property (nonatomic, readonly) NSUserActivity *appClipUserActivity;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (getter=isApplicationInstalled, nonatomic, readonly) bool applicationInstalled;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) unsigned long long bundleVersion;
@property (nonatomic, copy) NSString *fullAppCaption;
@property (nonatomic, copy) NSString *fullAppName;
@property (nonatomic, copy) NSURL *fullAppStoreURL;
@property (nonatomic, readonly) struct CGImage { }*iconImage;
@property (nonatomic, readonly) NSString *iconImagePath;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *lastActivatedTime;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, copy) NSURL *pageURL;
@property (getter=isPoweredBy, nonatomic) bool poweredBy;
@property (nonatomic, copy) NSURL *registeredURL;
@property (nonatomic) bool scenelessBackgroundLaunch;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) long long webClipType;

+ (id)appClips;

- (void).cxx_destruct;
- (id)_bundleResourceWithName:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_init;
- (id)_initWithIdentifier:(id)arg1 webClipDictionary:(id)arg2;
- (id)_temporaryIconPath;
- (void)_updateWithClipMetadata:(id)arg1;
- (id)appClipUserActivity;
- (id)applicationBundleIdentifier;
- (id)bundleIdentifier;
- (unsigned long long)bundleVersion;
- (id)description;
- (id)fullAppCaption;
- (id)fullAppName;
- (id)fullAppStoreURL;
- (struct CGImage { }*)iconImage;
- (id)iconImagePath;
- (id)identifier;
- (bool)isApplicationInstalled;
- (bool)isPoweredBy;
- (id)lastActivatedTime;
- (id)localizedSubtitle;
- (id)pageURL;
- (id)registeredURL;
- (bool)scenelessBackgroundLaunch;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setFullAppCaption:(id)arg1;
- (void)setFullAppName:(id)arg1;
- (void)setFullAppStoreURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastActivatedTime:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setPoweredBy:(bool)arg1;
- (void)setRegisteredURL:(id)arg1;
- (void)setScenelessBackgroundLaunch:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)set_temporaryIconPath:(id)arg1;
- (id)title;
- (long long)webClipType;

@end
