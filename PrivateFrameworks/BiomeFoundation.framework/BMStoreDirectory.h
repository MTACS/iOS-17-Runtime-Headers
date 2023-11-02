
@interface BMStoreDirectory : NSObject

+ (id)artifacts;
+ (id)bookmarks;
+ (id)client;
+ (id)compute;
+ (id)databases;
+ (id)flexibleStorage;
+ (id)localDevice;
+ (id)lock;
+ (id)metadata;
+ (id)nonwaking;
+ (id)persistent;
+ (id)private;
+ (id)public;
+ (id)remoteDevices;
+ (id)restricted;
+ (id)server;
+ (id)sessions;
+ (void)setBasePathForTestingWithPath:(id)arg1;
+ (id)sharedSync;
+ (id)streams;
+ (id)subscriptions;
+ (id)sync;
+ (id)tmp;
+ (id)tombstones;
+ (void)unsetBasePathForTesting;

@end
