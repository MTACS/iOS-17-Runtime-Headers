
@interface CLKUserActivity : NSObject {
    NSString * _encodedUserActivity;
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly) NSString *encodedUserActivity;
@property (nonatomic, readonly) NSUserActivity *userActivity;

- (void).cxx_destruct;
- (id)encodedUserActivity;
- (id)initWithEncodedUserActivity:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)userActivity;

@end
