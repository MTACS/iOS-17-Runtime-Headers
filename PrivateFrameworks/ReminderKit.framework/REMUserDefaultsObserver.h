
@interface REMUserDefaultsObserver : NSObject <REMUserDefaultsObserveToken> {
    id /* block */  _block;
    bool  _removed;
    REMUserDefaults * _userDefaults;
    NSString * _userDefaultsKey;
}

@property (nonatomic, copy) id /* block */ block;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool removed;
@property (readonly) Class superclass;
@property (nonatomic, retain) REMUserDefaults *userDefaults;
@property (nonatomic, copy) NSString *userDefaultsKey;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)dealloc;
- (id)initWithUserDefaults:(id)arg1 key:(id)arg2 block:(id /* block */)arg3;
- (bool)removed;
- (void)setBlock:(id /* block */)arg1;
- (void)setRemoved:(bool)arg1;
- (void)setUserDefaults:(id)arg1;
- (void)setUserDefaultsKey:(id)arg1;
- (void)stopObserving;
- (id)userDefaults;
- (id)userDefaultsKey;

@end
