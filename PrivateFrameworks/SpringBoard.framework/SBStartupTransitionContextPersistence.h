
@interface SBStartupTransitionContextPersistence : NSObject {
    SBBootDefaults * _bootDefaults;
    bool  _loginSession;
}

- (void).cxx_destruct;
- (id)initWithBootDefaults:(id)arg1 loginSession:(bool)arg2;
- (id)readTransitionContext;
- (void)saveContext:(id)arg1;

@end
