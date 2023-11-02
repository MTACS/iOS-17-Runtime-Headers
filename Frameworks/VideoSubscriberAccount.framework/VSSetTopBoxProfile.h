
@interface VSSetTopBoxProfile : NSObject <NSCopying> {
    NSDate * _activationTime;
    bool  _isDeveloper;
    NSString * _providerID;
    NSString * _userToken;
}

@property (nonatomic, retain) NSDate *activationTime;
@property (nonatomic) bool isDeveloper;
@property (nonatomic, retain) NSString *providerID;
@property (nonatomic, retain) NSString *userToken;

- (void).cxx_destruct;
- (id)activationTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithProviderID:(id)arg1 userToken:(id)arg2 activationTime:(id)arg3 isDeveloper:(bool)arg4;
- (bool)isDeveloper;
- (id)providerID;
- (void)setActivationTime:(id)arg1;
- (void)setIsDeveloper:(bool)arg1;
- (void)setProviderID:(id)arg1;
- (void)setUserToken:(id)arg1;
- (id)userToken;

@end
