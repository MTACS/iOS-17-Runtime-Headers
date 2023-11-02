
@interface SSCoreHapticsInfo : NSObject {
    struct queue { 
        struct object { 
            NSObject<OS_dispatch_object> *fObj; 
        } fObj; 
    }  _SSIDMapQueue;
    NSMutableDictionary * _SSIDToPlayerMap;
}

+ (id)instance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)disposeSSID:(unsigned long long)arg1;
- (unsigned long long)generateNewSSIDForPlayer:(id)arg1;
- (id)getPlayerForSSID:(unsigned long long)arg1;
- (id)init;
- (void)registerSSID:(unsigned long long)arg1 withPlayer:(id)arg2;
- (void)unregisterSSID:(unsigned long long)arg1;

@end
