
@interface DNDAppInfoService : NSObject {
    NSString * _clientIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithClientIdentifier:(id)arg1;
- (id)getAppInfoForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)getAppInfoForBundleIdentifiers:(id)arg1 error:(id*)arg2;

@end
