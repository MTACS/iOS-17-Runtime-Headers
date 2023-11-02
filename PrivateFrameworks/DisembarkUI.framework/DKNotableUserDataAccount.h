
@interface DKNotableUserDataAccount : NSObject {
    NSString * _name;
    UIImage * _profilePicture;
    NSString * _username;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) UIImage *profilePicture;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (id)initWithProfilePicture:(id)arg1 name:(id)arg2 username:(id)arg3;
- (id)name;
- (id)profilePicture;
- (void)setName:(id)arg1;
- (void)setProfilePicture:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
