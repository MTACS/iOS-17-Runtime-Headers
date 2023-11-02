
@interface SPApplication : NSObject <NSSecureCoding> {
    NSURL * _URL;
    NSString * _appBundleIdentifier;
    NSString * _displayIdentifier;
    NSString * _displayNameInternal;
    NSMutableArray * _keywords;
    NSString * _longDisplayName;
    NSString * _shortVersion;
    NSString * _subtitle;
    long long  _webClipType;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) NSString *appBundleIdentifier;
@property (nonatomic, retain) NSString *displayIdentifier;
@property (nonatomic, retain) NSString *displayName;
@property (retain) NSString *displayNameInternal;
@property (nonatomic, readonly) bool displayNameLoaded;
@property (readonly) bool isAppClip;
@property (readonly) bool isWebClip;
@property (nonatomic, retain) NSMutableArray *keywords;
@property (nonatomic, retain) NSString *longDisplayName;
@property (nonatomic, retain) NSString *shortVersion;
@property (nonatomic, retain) NSString *subtitle;
@property (readonly) NSString *utiType;
@property (nonatomic) long long webClipType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)appBundleIdentifier;
- (void)copyToSearchFoundationResult:(id)arg1;
- (id)description;
- (id)displayIdentifier;
- (id)displayName;
- (id)displayNameInternal;
- (bool)displayNameLoaded;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAppClip;
- (bool)isEqual:(id)arg1;
- (bool)isWebClip;
- (id)keywords;
- (id)longDisplayName;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setDisplayIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayNameInternal:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setLongDisplayName:(id)arg1;
- (void)setShortVersion:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setWebClipType:(long long)arg1;
- (id)shortVersion;
- (id)subtitle;
- (id)utiType;
- (long long)webClipType;

@end
