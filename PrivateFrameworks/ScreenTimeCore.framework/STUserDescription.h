
@interface STUserDescription : NSObject {
    NSString * _familyName;
    NSString * _givenName;
    NSString * _userAltDSID;
    NSNumber * _userDSID;
}

@property (nonatomic, readonly, copy) NSString *familyName;
@property (nonatomic, readonly, copy) NSString *givenName;
@property (nonatomic, readonly, copy) NSString *userAltDSID;
@property (nonatomic, readonly, copy) NSNumber *userDSID;

+ (id)currentUser;
+ (void)currentUserWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)familyName;
- (id)givenName;
- (id)initWithGivenName:(id)arg1 familyName:(id)arg2 userDSID:(id)arg3 userAltDSID:(id)arg4;
- (id)userAltDSID;
- (id)userDSID;

@end
