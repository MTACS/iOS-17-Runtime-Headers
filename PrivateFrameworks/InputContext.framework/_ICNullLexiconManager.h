
@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging> {
    NSMutableArray * _contactObservers;
}

- (void).cxx_destruct;
- (id /* block */)addContactObserver:(id /* block */)arg1;
- (id /* block */)addNamedEntitiesUpdateObserver:(id /* block */)arg1;
- (void)hibernate;
- (id)init;
- (id)loadLexicons;
- (id)loadLexicons:(id /* block */)arg1;
- (id)loadLexiconsUsingFilter:(id /* block */)arg1;
- (void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)removeContactObserver:(id /* block */)arg1;
- (void)removeNamedEntitiesUpdateObserver:(id /* block */)arg1;
- (id)test_loadLexicons;
- (void)unloadLexicons;
- (void)warmUp;

@end
