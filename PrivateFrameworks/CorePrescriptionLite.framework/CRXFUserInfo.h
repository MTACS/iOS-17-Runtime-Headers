
@interface CRXFUserInfo : NSObject {
    NSString * _firstName;
    NSString * _userID;
}

@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *userID;

- (void).cxx_destruct;
- (id)description;
- (id)firstName;
- (id)initWithUserID:(id)arg1 firstName:(id)arg2;
- (id)userID;

@end
