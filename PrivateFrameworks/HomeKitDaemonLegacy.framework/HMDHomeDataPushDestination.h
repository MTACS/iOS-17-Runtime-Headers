
@interface HMDHomeDataPushDestination : NSObject {
    NSString * _destination;
    bool  _ignoreConfigCompare;
    HMDUser * _user;
    NSString * _username;
}

@property (nonatomic, readonly) NSString *destination;
@property (nonatomic) bool ignoreConfigCompare;
@property (nonatomic, readonly) NSString *pushDestination;
@property (nonatomic, readonly) HMDUser *user;
@property (nonatomic, readonly) NSString *username;

- (void).cxx_destruct;
- (id)description;
- (id)destination;
- (bool)ignoreConfigCompare;
- (id)initWithUser:(id)arg1 destination:(id)arg2;
- (id)pushDestination;
- (void)setIgnoreConfigCompare:(bool)arg1;
- (id)user;
- (id)username;

@end
