
@interface SFPeopleSuggestion : NSObject <SFPeopleSuggestion> {
    NSArray * _contacts;
    NSString * _deviceModelIdentifier;
    NSString * _displayName;
    INImage * _donatedImage;
    NSArray * _formattedHandles;
    NSString * _identifier;
    bool  _isGroup;
    bool  _isPlaceholder;
    bool  _isRestricted;
    NSString * _transportBundleIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceModelIdentifier;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) INImage *donatedImage;
@property (nonatomic, readonly, copy) NSArray *formattedHandles;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isGroup;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic) bool isRestricted;
@property (nonatomic, readonly) bool isTapToRadar;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *transportBundleIdentifier;

+ (id)TTRPeopleSuggestion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contacts;
- (id)description;
- (id)deviceModelIdentifier;
- (id)displayName;
- (id)donatedImage;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedHandles;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 transportBundleIdentifier:(id)arg3 contact:(id)arg4 deviceModelIdentifier:(id)arg5;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 transportBundleIdentifier:(id)arg3 contacts:(id)arg4 formattedHandles:(id)arg5 donatedImage:(id)arg6 placeholder:(bool)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isGroup;
- (bool)isPlaceholder;
- (bool)isRestricted;
- (bool)isTapToRadar;
- (void)setIsRestricted:(bool)arg1;
- (id)transportBundleIdentifier;

@end
