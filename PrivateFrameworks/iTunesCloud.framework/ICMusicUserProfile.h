
@interface ICMusicUserProfile : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _acceptedTerms;
    ICStoreArtworkInfo * _artworkInfo;
    bool  _collaborationAllowed;
    bool  _displayNameAccepted;
    NSString * _handle;
    bool  _isContactCheckAllowed;
    bool  _isDiscoverableByContact;
    bool  _isOnboarded;
    bool  _isPrivate;
    bool  _isVerified;
    NSString * _name;
    ICMusicSocialProfile * _socialProfile;
}

@property (nonatomic, readonly) NSArray *acceptedTerms;
@property (nonatomic, readonly) ICStoreArtworkInfo *artworkInfo;
@property (nonatomic, readonly) bool collaborationAllowed;
@property (nonatomic, readonly) bool displayNameAccepted;
@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) bool isContactCheckAllowed;
@property (nonatomic, readonly) bool isDiscoverableByContact;
@property (nonatomic, readonly) bool isOnboarded;
@property (nonatomic, readonly) bool isPrivate;
@property (nonatomic, readonly) bool isVerified;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) ICMusicSocialProfile *socialProfile;
@property (nonatomic, readonly) NSString *socialProfileID;

+ (id)attributesInfoFromMediaAPIResponse:(id)arg1;
+ (id)mediaAPIRequestURL;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_capabilityForKey:(id)arg1 fromAttributes:(id)arg2;
- (id)acceptedTerms;
- (id)artworkInfo;
- (bool)collaborationAllowed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)displayNameAccepted;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaAPIResponse:(id)arg1;
- (bool)isContactCheckAllowed;
- (bool)isDiscoverableByContact;
- (bool)isEqual:(id)arg1;
- (bool)isOnboarded;
- (bool)isPrivate;
- (bool)isVerified;
- (id)name;
- (void)setSocialProfile:(id)arg1;
- (id)socialProfile;
- (id)socialProfileID;

@end
