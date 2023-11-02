
@interface FCFeldsparIDProvider : NSObject <FCFeldsparIDProvider, FCUserInfoObserving> {
    NSString * _feldsparID;
    NSHashTable * _observers;
    FCUserInfo * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *feldsparID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCUserInfo *userInfo;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_updateFeldsparID:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)feldsparID;
- (id)init;
- (id)observers;
- (void)registerUserInfo:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setFeldsparID:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(bool)arg2;

@end
