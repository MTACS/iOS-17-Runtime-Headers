
@interface HMDWHAAccessControlEvent : HMMLogEvent {
    bool  _isP2PEnabled;
    bool  _isPasswordSet;
    int  _privilegeLevel;
}

@property (nonatomic) bool isP2PEnabled;
@property (nonatomic) bool isPasswordSet;
@property (nonatomic) int privilegeLevel;

+ (int)awdUserPrivilegeFromHMUserPrivilege:(long long)arg1;
+ (id)eventWithP2PEnabled:(bool)arg1 privilegeLevel:(long long)arg2 passwordSet:(bool)arg3;

- (bool)isP2PEnabled;
- (bool)isPasswordSet;
- (int)privilegeLevel;
- (void)setIsP2PEnabled:(bool)arg1;
- (void)setIsPasswordSet:(bool)arg1;
- (void)setPrivilegeLevel:(int)arg1;

@end
