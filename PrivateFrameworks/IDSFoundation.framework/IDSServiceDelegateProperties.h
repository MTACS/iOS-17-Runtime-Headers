
@interface IDSServiceDelegateProperties : NSObject {
    bool  _wantsCrossAccountMessaging;
}

@property (nonatomic) bool wantsCrossAccountMessaging;

- (void)setWantsCrossAccountMessaging:(bool)arg1;
- (bool)wantsCrossAccountMessaging;

@end
