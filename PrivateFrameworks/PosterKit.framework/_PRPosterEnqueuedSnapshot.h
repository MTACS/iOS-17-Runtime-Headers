
@interface _PRPosterEnqueuedSnapshot : NSObject <BSInvalidatable> {
    id /* block */  _completion;
    NSDate * _date;
    NSString * _logIdentifier;
    PRSPosterPath * _path;
    PRPosterSceneSettings * _posterSettings;
    NSNumber * _priority;
    PRPosterSnapshotRequest * _request;
}

@property (nonatomic, readonly, copy) id /* block */ completion;
@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *logIdentifier;
@property (nonatomic, readonly) PRSPosterPath *path;
@property (nonatomic, readonly) PRPosterSceneSettings *posterSettings;
@property (nonatomic, readonly) NSNumber *priority;
@property (nonatomic, readonly) PRPosterSnapshotRequest *request;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)date;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)invalidate;
- (id)logIdentifier;
- (id)path;
- (id)posterSettings;
- (id)priority;
- (id)request;

@end
