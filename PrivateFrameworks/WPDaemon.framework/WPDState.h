
@interface WPDState : NSObject {
    NSMutableSet * _cbManagers;
    NSObject<OS_dispatch_queue> * _cbQueue;
    NSMutableDictionary * _cbStates;
    bool  _initialUpdate;
    id /* block */  _notification;
    bool  _restricted;
    long long  _state;
}

@property (retain) NSMutableSet *cbManagers;
@property NSObject<OS_dispatch_queue> *cbQueue;
@property (retain) NSMutableDictionary *cbStates;
@property bool initialUpdate;
@property id /* block */ notification;
@property bool restricted;
@property long long state;

+ (long long)getWPStateFromCBManagerState:(long long)arg1;

- (void).cxx_destruct;
- (id)cbManagers;
- (id)cbQueue;
- (id)cbStates;
- (void)coalesceState:(long long*)arg1 Restricted:(bool*)arg2 UpdateCache:(bool)arg3;
- (void)dealloc;
- (id)description;
- (id)initWithQueue:(id)arg1;
- (bool)initialUpdate;
- (id /* block */)notification;
- (void)registerManager:(id)arg1;
- (bool)restricted;
- (void)setCbManagers:(id)arg1;
- (void)setCbQueue:(id)arg1;
- (void)setCbStates:(id)arg1;
- (void)setInitialUpdate:(bool)arg1;
- (void)setNotification:(id /* block */)arg1;
- (void)setRestricted:(bool)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)updateWithCompletion:(id /* block */)arg1;
- (void)updateWithManager:(id)arg1 Completion:(id /* block */)arg2;

@end
