
@interface _GDSBalancingAuthority : NSObject {
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)currentBalancingAuthority;
+ (id)fetchBalancingAuthorityPolygons;
+ (id)loadBalancingAuthorityStatus;
+ (id)loadNumberForPreferenceKey:(id)arg1;
+ (id)loadRegistrations;
+ (id)loadStringForPreferenceKey:(id)arg1;
+ (void)saveBalancingAuthority:(id)arg1;
+ (void)saveBalancingAuthorityStatus:(id)arg1;
+ (void)saveRegisteration:(id)arg1 bundlePath:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)fetchBalancingAuthority;
- (id)init;
- (id)log;
- (id)queue;
- (void)setLog:(id)arg1;
- (void)setQueue:(id)arg1;

@end
