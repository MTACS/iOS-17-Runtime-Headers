
@interface SUUIMediaSocialProfile : NSObject <NSCopying> {
    NSURL * _backgroundImageURL;
    NSString * _bio;
    NSString * _handle;
    NSString * _identifier;
    NSString * _name;
    NSURL * _profileImageURL;
    NSString * _profileType;
}

@property (nonatomic, copy) NSURL *backgroundImageURL;
@property (nonatomic, copy) NSString *bio;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSURL *profileImageURL;
@property (nonatomic, copy) NSString *profileType;

- (void).cxx_destruct;
- (id)backgroundImageURL;
- (id)bio;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)handle;
- (id)identifier;
- (id)initWithProfileDictionary:(id)arg1;
- (id)name;
- (id)profileImageURL;
- (id)profileType;
- (void)setBackgroundImageURL:(id)arg1;
- (void)setBio:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProfileImageURL:(id)arg1;
- (void)setProfileType:(id)arg1;

@end
