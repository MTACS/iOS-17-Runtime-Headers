
@interface PSYSyncSessionUpdate : NSObject {
    PSYSyncSession * _originalSession;
    PSYSyncSession * _updatedSession;
}

@property (nonatomic, readonly) PSYSyncSession *originalSession;
@property (nonatomic, readonly) PSYSyncSession *updatedSession;

- (void).cxx_destruct;
- (bool)didUpdateCompleteSyncSession;
- (void)enumerateChangedActivitiesWithBlock:(id /* block */)arg1;
- (void)enumerateNewlyCompletedActivitiesWithBlock:(id /* block */)arg1;
- (void)enumerateNewlyRunningActivitiesWithBlock:(id /* block */)arg1;
- (id)initWithOriginalSession:(id)arg1 updatedSession:(id)arg2;
- (id)originalSession;
- (id)updatedSession;

@end
