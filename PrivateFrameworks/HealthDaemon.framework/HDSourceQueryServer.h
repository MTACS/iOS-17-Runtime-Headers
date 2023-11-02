
@interface HDSourceQueryServer : HDQueryServer <HDDataObserver> {
    bool  _deliversUpdates;
    NSMutableSet * _sources;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)queryClass;
+ (id)requiredEntitlements;

- (void).cxx_destruct;
- (void)_queue_start;
- (bool)_shouldListenForUpdates;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;

@end
