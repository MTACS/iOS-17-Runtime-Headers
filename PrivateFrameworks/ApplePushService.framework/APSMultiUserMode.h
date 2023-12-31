
@interface APSMultiUserMode : NSObject {
    bool  _isLoggedInUser;
    bool  _isMultiUser;
}

@property (nonatomic, readonly) bool isLoggedInUser;
@property (nonatomic, readonly) bool isMultiUser;

+ (bool)_getIsCurrentlyLoggedIn;
+ (bool)_getMultiUserMode;
+ (id)sharedInstance;

- (id)initWithIsMultiUserMode:(bool)arg1 loggedInUser:(bool)arg2;
- (bool)isLoggedInUser;
- (bool)isMultiAndLoggedIn;
- (bool)isMultiUser;

@end
