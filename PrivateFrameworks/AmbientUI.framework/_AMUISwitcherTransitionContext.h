
@interface _AMUISwitcherTransitionContext : NSObject <AMUISwitcherTransition> {
    long long  _direction;
    _AMUISwitcherVisibleItemRecord * _fromRecord;
    bool  _interactive;
    _AMUISwitcherVisibleItemRecord * _toRecord;
    NSMutableDictionary * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long direction;
@property (nonatomic, readonly) <AMUISwitcherItem> *fromItem;
@property (readonly) unsigned long long hash;
@property (getter=isInteractive, nonatomic, readonly) bool interactive;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <AMUISwitcherItem> *toItem;

- (void).cxx_destruct;
- (long long)direction;
- (id)fromItem;
- (id)initWithFromRecord:(id)arg1 toRecord:(id)arg2 direction:(long long)arg3 interactive:(bool)arg4;
- (bool)isInteractive;
- (void)removeUserInfoObjectForKey:(id)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)toItem;
- (id)userInfoObjectForKey:(id)arg1;

@end
