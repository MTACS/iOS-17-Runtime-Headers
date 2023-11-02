
@interface SBLockScreenPluginContext : NSObject <BSDescriptionProviding, NSCopying> {
    id /* block */  _auxiliaryAnimation;
    NSString * _name;
    <SBLockScreenPluginLifecycleObserver> * _observer;
    FBProcess<FBSProcess> * _process;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) id /* block */ auxiliaryAnimation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) <SBLockScreenPluginLifecycleObserver> *observer;
@property (nonatomic, retain) FBProcess<FBSProcess> *process;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (id)contextWithName:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)auxiliaryAnimation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)name;
- (id)observer;
- (id)process;
- (void)setAuxiliaryAnimation:(id /* block */)arg1;
- (void)setName:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setProcess:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)userInfo;

@end
