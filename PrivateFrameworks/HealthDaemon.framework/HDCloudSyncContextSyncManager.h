
@interface HDCloudSyncContextSyncManager : NSObject {
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1;
- (id)pull:(id /* block */)arg1;
- (id)push:(id /* block */)arg1;

@end
