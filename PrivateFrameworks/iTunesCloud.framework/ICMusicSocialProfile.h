
@interface ICMusicSocialProfile : NSObject <NSCopying, NSSecureCoding> {
    ICStoreArtworkInfo * _artworkInfo;
    NSString * _handle;
    bool  _isPrivate;
    bool  _isVerified;
    NSString * _name;
    NSString * _socialProfileID;
}

@property (nonatomic, readonly) ICStoreArtworkInfo *artworkInfo;
@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) bool isPrivate;
@property (nonatomic, readonly) bool isVerified;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *socialProfileID;

+ (id)mediaAPIRequestURL;
+ (id)socialProfileInfoFromMediaAPIResponse:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artworkInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaAPIResponse:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPrivate;
- (bool)isVerified;
- (id)name;
- (id)socialProfileID;

@end
