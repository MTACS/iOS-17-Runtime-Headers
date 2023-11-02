
@interface ACActivityPresentationOptions : NSObject <NSCopying> {
    long long  _authorizationOptionsType;
    NSArray * _destinations;
    bool  _isUserDismissalAllowedOnLockScreen;
    bool  _showsAuthorizationOptions;
}

@property (nonatomic) long long authorizationOptionsType;
@property (nonatomic, retain) NSArray *destinations;
@property (nonatomic) bool showsAuthorizationOptions;
@property (getter=isUserDismissalAllowedOnLockScreen, nonatomic) bool userDismissalAllowedOnLockScreen;

- (void).cxx_destruct;
- (id)_init;
- (long long)authorizationOptionsType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destinations;
- (id)initFromSwift:(bool)arg1;
- (id)initWithDestinations:(id)arg1;
- (bool)isUserDismissalAllowedOnLockScreen;
- (void)setAuthorizationOptionsType:(long long)arg1;
- (void)setDestinations:(id)arg1;
- (void)setShowsAuthorizationOptions:(bool)arg1;
- (void)setUserDismissalAllowedOnLockScreen:(bool)arg1;
- (bool)showsAuthorizationOptions;

@end
