
@interface MRClient : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _appIcon;
    NSString * _bundleIdentifier;
    NSString * _displayName;
    NSArray * _extendedBundleIdentifierHierarchy;
    NSString * _parentApplicationBundleIdentifier;
    int  _processIdentifier;
    unsigned int  _processUserIdentifier;
    MRColorComponents * _tintColor;
    long long  _visibility;
}

@property (nonatomic, copy) NSURL *appIcon;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSArray *bundleIdentifierHierarchy;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSArray *extendedBundleIdentifierHierarchy;
@property (nonatomic, readonly) bool hasAuxiliaryProperties;
@property (nonatomic, readonly) bool hasPlaceholder;
@property (getter=isLocal, nonatomic, readonly) bool local;
@property (nonatomic, copy) NSString *parentApplicationBundleIdentifier;
@property (nonatomic) int processIdentifier;
@property (nonatomic) unsigned int processUserIdentifier;
@property (nonatomic, readonly) _MRNowPlayingClientProtobuf *protobuf;
@property (nonatomic, readonly, copy) NSString *representedBundleID;
@property (nonatomic, readonly) MRClient *skeleton;
@property (getter=isSystemBooksApplication, nonatomic, readonly) bool systemBooksApplication;
@property (getter=isSystemMediaApplication, nonatomic, readonly) bool systemMediaApplication;
@property (getter=isSystemPodcastsApplication, nonatomic, readonly) bool systemPodcastsApplication;
@property (nonatomic, copy) MRColorComponents *tintColor;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic) long long visibility;

+ (id)anyClient;
+ (id)localClient;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appIcon;
- (id)bundleIdentifier;
- (id)bundleIdentifierHierarchy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)debugDescription;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedBundleIdentifierHierarchy;
- (bool)hasAuxiliaryProperties;
- (bool)hasPlaceholder;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithProcessIdentifier:(int)arg1 bundleIdentifier:(id)arg2;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocal;
- (bool)isSystemBooksApplication;
- (bool)isSystemMediaApplication;
- (bool)isSystemPodcastsApplication;
- (bool)isValid;
- (void)mergeFrom:(id)arg1;
- (id)parentApplicationBundleIdentifier;
- (int)processIdentifier;
- (unsigned int)processUserIdentifier;
- (id)protobuf;
- (id)representedBundleID;
- (void)resolvePlaceholdersForDeviceInfo:(id)arg1;
- (void)setAppIcon:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setExtendedBundleIdentifierHierarchy:(id)arg1;
- (void)setParentApplicationBundleIdentifier:(id)arg1;
- (void)setProcessIdentifier:(int)arg1;
- (void)setProcessUserIdentifier:(unsigned int)arg1;
- (void)setTintColor:(id)arg1;
- (void)setVisibility:(long long)arg1;
- (id)skeleton;
- (id)tintColor;
- (long long)visibility;

@end
