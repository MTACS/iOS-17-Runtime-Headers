
@interface CRKFetchObservingInstructorsByCourseOperation : CATOperation {
    CATRemoteTaskOperation * _fetchCoursesOperation;
    CATRemoteTaskOperation * _fetchInstructorsOperation;
    <CRKRequestPerformingProtocol> * _requestPerformer;
}

@property (nonatomic, retain) CATRemoteTaskOperation *fetchCoursesOperation;
@property (nonatomic, retain) CATRemoteTaskOperation *fetchInstructorsOperation;
@property (nonatomic, readonly) <CRKRequestPerformingProtocol> *requestPerformer;

- (void).cxx_destruct;
- (void)cancel;
- (void)compileResultsWithFetchCoursesResult:(id)arg1 fetchScreenObserversResult:(id)arg2;
- (id)fetchCoursesOperation;
- (id)fetchInstructorsOperation;
- (id)initWithRequestPerformer:(id)arg1;
- (bool)isAsynchronous;
- (void)main;
- (void)operationsDidComplete:(id)arg1;
- (id)requestPerformer;
- (void)setFetchCoursesOperation:(id)arg1;
- (void)setFetchInstructorsOperation:(id)arg1;

@end
