
@interface VCServerBag : NSObject {
    bool  isLoaded;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  isLoadedCondition;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  isLoadedMutex;
    id  observer;
}

+ (void)checkKeysAgainstHardcodedPrefs:(id)arg1;
+ (void)clearBagWithRefreshIntervalInSeconds:(int)arg1;
+ (void)pullStoreBagKeys;
+ (void)retrieveBag;
+ (id)sharedInstance;
+ (bool)verifyRequiredKeys:(id*)arg1;
+ (bool)verifyRequiredKeys:(id)arg1 withError:(id*)arg2;
+ (bool)verifyRequiredVoiceChatKeys:(id*)arg1;

- (id)init;
- (void)waitForBagLoad;

@end
