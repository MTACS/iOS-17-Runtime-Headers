
@interface SMCTVUserProfileManager : NSObject

@property (nonatomic, readonly) <SMCTVUserProfile> *selectedUserProfile;

+ (id)sharedInstance;

- (id)selectedUserProfile;

@end
