
@interface ATXMediaApplications : NSObject {
    NSSet * _mediaApps;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_updateMediaApps;
- (bool)appSupportsMedia:(id)arg1;
- (id)init;

@end
