
@interface MISystemAppState : NSObject {
    NSObject<OS_dispatch_queue> * _appStateQueue;
    NSMutableDictionary * _systemAppStateList;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *appStateQueue;
@property (nonatomic, retain) NSMutableDictionary *systemAppStateList;

+ (id)_systemAppStateFromURL:(id)arg1;
+ (id)sharedList;

- (void).cxx_destruct;
- (id)_onQueue_retrieveSystemAppStateRestoringBackedUpState:(bool)arg1;
- (void)_onQueue_setSystemAppStateList:(id)arg1;
- (id)_onQueue_systemAppStateList;
- (void)addIdentifier:(id)arg1 withState:(int)arg2;
- (id)appStateQueue;
- (id)init;
- (void)removeIdentifiers:(id)arg1;
- (void)setSystemAppStateList:(id)arg1;
- (id)systemAppStateDictionaryRestoringBackedUpState:(bool)arg1;
- (id)systemAppStateList;

@end
