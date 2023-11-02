
@interface FAMemberCardModel : NSObject {
    FAFamilyMember * _member;
    UIImage * _profileImage;
}

@property (nonatomic, retain) FAFamilyMember *member;
@property (nonatomic, retain) UIImage *profileImage;

- (void).cxx_destruct;
- (id)member;
- (id)profileImage;
- (void)setMember:(id)arg1;
- (void)setProfileImage:(id)arg1;

@end
