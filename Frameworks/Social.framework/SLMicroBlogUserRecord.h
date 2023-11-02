
@interface SLMicroBlogUserRecord : NSObject <NSSecureCoding> {
    NSString * _name;
    UIImage * _profileImageCache;
    NSString * _profile_image_url;
    NSString * _screen_name;
}

@property (nonatomic, retain) NSString *name;
@property (retain) UIImage *profileImageCache;
@property (nonatomic, retain) NSString *profile_image_url;
@property (nonatomic, retain) NSString *screen_name;

+ (bool)supportsSecureCoding;
+ (id)userRecordWithDictionaryRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)profileImageCache;
- (id)profile_image_url;
- (id)screen_name;
- (void)setName:(id)arg1;
- (void)setProfileImageCache:(id)arg1;
- (void)setProfile_image_url:(id)arg1;
- (void)setScreen_name:(id)arg1;
- (void)setValuesWithUserDictionary:(id)arg1;

@end