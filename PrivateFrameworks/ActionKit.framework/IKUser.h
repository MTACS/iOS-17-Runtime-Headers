
@interface IKUser : NSObject {
    bool  _subscribed;
    unsigned long long  _userID;
    NSString * _username;
}

@property (getter=isSubscribed, nonatomic) bool subscribed;
@property (nonatomic) unsigned long long userID;
@property (nonatomic, copy) NSString *username;

- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isSubscribed;
- (void)setSubscribed:(bool)arg1;
- (void)setUserID:(unsigned long long)arg1;
- (void)setUsername:(id)arg1;
- (unsigned long long)userID;
- (id)username;

@end
