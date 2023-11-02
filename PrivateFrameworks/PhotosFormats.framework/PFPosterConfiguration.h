
@interface PFPosterConfiguration : NSObject <NSCopying, NSSecureCoding, PFPosterConfigurationAnalyticsSupport> {
    long long  _configurationType;
    PFPosterEditConfiguration * _editConfiguration;
    NSString * _identifier;
    PFWallpaperCompoundDeviceConfiguration * _layoutConfiguration;
    NSArray * _media;
    long long  _options;
    PFPosterShuffleConfiguration * _shuffleConfiguration;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) long long configurationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PFPosterEditConfiguration *editConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) PFWallpaperCompoundDeviceConfiguration *layoutConfiguration;
@property (nonatomic, retain) NSArray *media;
@property (nonatomic) long long options;
@property (nonatomic, readonly) long long posterType;
@property (nonatomic, retain) PFPosterShuffleConfiguration *shuffleConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (id)loadFromURL:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsPayload;
- (long long)configurationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)editConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigurationType:(long long)arg1;
- (id)layoutConfiguration;
- (id)media;
- (id)mediaAnalyticsPayload;
- (long long)options;
- (long long)posterType;
- (bool)saveToURL:(id)arg1 error:(id*)arg2;
- (void)setEditConfiguration:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLayoutConfiguration:(id)arg1;
- (void)setMedia:(id)arg1;
- (void)setOptions:(long long)arg1;
- (void)setShuffleConfiguration:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)shuffleConfiguration;
- (id)userInfo;

@end
