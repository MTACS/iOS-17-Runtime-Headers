
@interface VCPClientDatabaseManager : NSObject {
    NSMutableDictionary * _databases;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedDatabaseForPhotoLibrary:(id)arg1;
+ (id)sharedDatabaseManager;

- (void).cxx_destruct;
- (id)init;
- (id)sharedDatabaseForPhotoLibrary:(id)arg1;

@end
