
@interface HFUserItemProvider : HFItemProvider {
    HMHome * _home;
    bool  _includeCurrentUser;
    bool  _includeOtherUsers;
    unsigned long long  _nameStyle;
    NSMutableSet * _userItems;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) bool includeCurrentUser;
@property (nonatomic) bool includeOtherUsers;
@property (nonatomic) unsigned long long nameStyle;
@property (nonatomic, retain) NSMutableSet *userItems;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (bool)includeCurrentUser;
- (bool)includeOtherUsers;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (unsigned long long)nameStyle;
- (id)reloadItems;
- (void)setIncludeCurrentUser:(bool)arg1;
- (void)setIncludeOtherUsers:(bool)arg1;
- (void)setNameStyle:(unsigned long long)arg1;
- (void)setUserItems:(id)arg1;
- (id)userItems;

@end
