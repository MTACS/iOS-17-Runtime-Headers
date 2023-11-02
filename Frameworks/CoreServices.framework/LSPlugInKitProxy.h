
@interface LSPlugInKitProxy : LSBundleProxy <LSDetachable, NSSecureCoding> {
    LSApplicationExtensionRecord * _appexRecord;
    LSBundleProxy * _containingBundle;
    NSString * _extensionPointID;
    bool  _onSystemPartition;
    NSString * _originalIdentifier;
    unsigned int  _platform;
    unsigned int  _pluginFlags;
    NSString * _pluginIdentifier;
    NSUUID * _pluginUUID;
    NSString * _protocol;
    NSDate * _registrationDate;
}

@property (readonly) bool __IS_canProvideIcon;
@property (readonly) bool __IS_isMessagesApp;
@property (readonly) bool __IS_isWatchApp;
@property (nonatomic, readonly) LSBundleProxy *containingBundle;
@property (nonatomic, readonly) LSExtensionPoint *extensionPoint;
@property (nonatomic, readonly) NSDictionary *infoPlist;
@property (getter=isOnSystemPartition, nonatomic, readonly) bool onSystemPartition;
@property (nonatomic, readonly) NSString *originalIdentifier;
@property (nonatomic, readonly) NSNumber *platform;
@property (nonatomic, readonly) bool pluginCanProvideIcon;
@property (nonatomic, readonly) NSString *pluginIdentifier;
@property (nonatomic, readonly) NSDictionary *pluginKitDictionary;
@property (nonatomic, readonly) NSUUID *pluginUUID;
@property (nonatomic, readonly) NSString *protocol;
@property (nonatomic, readonly) NSDate *registrationDate;
@property (nonatomic, readonly) NSString *teamID;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)containingBundleIdentifiersForPlugInBundleIdentifiers:(id)arg1 error:(id*)arg2;
+ (id)plugInKitProxyForPlugin:(unsigned int)arg1 withContext:(struct LSContext { id x1; }*)arg2;
+ (id)plugInKitProxyForPlugin:(unsigned int)arg1 withContext:(struct LSContext { id x1; }*)arg2 applicationExtensionRecord:(id)arg3 resolveAndDetach:(bool)arg4;
+ (id)plugInKitProxyForUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 effectiveIdentifier:(id)arg4 version:(id)arg5 bundleURL:(id)arg6;
+ (id)pluginKitProxyForIdentifier:(id)arg1;
+ (id)pluginKitProxyForURL:(id)arg1;
+ (id)pluginKitProxyForUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)UPPValidated;
- (id)_initWithPlugin:(unsigned int)arg1 andContext:(struct LSContext { id x1; }*)arg2 applicationExtensionRecord:(id)arg3 resolveAndDetach:(bool)arg4;
- (id)_initWithUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 effectiveIdentifier:(id)arg4 version:(id)arg5 bundleURL:(id)arg6;
- (id)_localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(bool)arg2;
- (id)_managedPersonas;
- (id)_stringLocalizerForTable:(id)arg1;
- (bool)_usesSystemPersona;
- (id)_valueForEqualityTesting;
- (id)boundIconsDictionary;
- (id)bundleType;
- (unsigned long long)compatibilityState;
- (id)containingBundle;
- (id)correspondingApplicationExtensionRecord;
- (id)dataContainerURL;
- (id)description;
- (void)detach;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionPoint;
- (bool)freeProfileValidated;
- (id)groupContainerURLs;
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (id)infoPlist;
- (id)initWithCoder:(id)arg1;
- (bool)isOnSystemPartition;
- (id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 inScope:(unsigned long long)arg3;
- (id)originalIdentifier;
- (id)platform;
- (bool)pluginCanProvideIcon;
- (id)pluginIdentifier;
- (id)pluginKitDictionary;
- (id)pluginUUID;
- (bool)profileValidated;
- (id)protocol;
- (id)registrationDate;
- (id)signerIdentity;
- (id)signerOrganization;
- (id)teamID;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (id)un_applicationBundleIdentifier;
- (id)un_applicationBundleURL;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)iconDataForInterfaceStyle:(long long)arg1;
- (id)iconForInterfaceStyle:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

- (bool)__IS_canProvideIcon;
- (id)__IS_iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (bool)__IS_isMessagesApp;
- (bool)__IS_isWatchApp;

// Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit

- (id)launchPersonas;

@end
