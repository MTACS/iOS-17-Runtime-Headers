
@interface BMAccessDaemon : NSObject {
    BMAccessServiceListener * _legacyAccessService;
    NSObject<OS_dispatch_queue> * _queue;
    BMAccessServiceListener * _systemAccessService;
    BMAccessServiceListener * _userAccessService;
}

@property (nonatomic, readonly) BMAccessServiceListener *legacyAccessService;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) BMAccessServiceListener *systemAccessService;
@property (nonatomic, readonly) BMAccessServiceListener *userAccessService;

+ (bool)isAgent;
+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (id)legacyAccessService;
- (id)queue;
- (id)systemAccessService;
- (id)userAccessService;

@end
