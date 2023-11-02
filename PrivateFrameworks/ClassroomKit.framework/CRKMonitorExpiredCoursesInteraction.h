
@interface CRKMonitorExpiredCoursesInteraction : CATOperation {
    CRKCourseEnrollmentController * _enrollmentController;
    <CRKExpiredCoursesInteractionDelegate> * _expiredCoursesInteractionDelegate;
    NSMutableSet * _expiredCoursesToPresent;
    CATSerialOperationQueue * _serialOperationQueue;
    <CRKRequestPerformingProtocol> * _studentDaemonProxy;
    bool  mIsObservingEnrollmentController;
}

@property (nonatomic, readonly) CRKCourseEnrollmentController *enrollmentController;
@property (nonatomic, readonly) <CRKExpiredCoursesInteractionDelegate> *expiredCoursesInteractionDelegate;
@property (nonatomic, readonly) NSMutableSet *expiredCoursesToPresent;
@property (nonatomic, readonly) CATSerialOperationQueue *serialOperationQueue;
@property (nonatomic, readonly) <CRKRequestPerformingProtocol> *studentDaemonProxy;

- (void).cxx_destruct;
- (void)beginInteractionWithExpiredCourses:(id)arg1;
- (void)cancel;
- (id)enrollmentController;
- (id)expiredCoursesInteractionDelegate;
- (void)expiredCoursesInteractionDidFinish:(id)arg1;
- (id)expiredCoursesToPresent;
- (id)initWithStudentDaemonProxy:(id)arg1 enrollmentController:(id)arg2 expiredCoursesInteractionDelegate:(id)arg3;
- (bool)isAsynchronous;
- (void)main;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)serialOperationQueue;
- (id)studentDaemonProxy;
- (void)updateWithCourses:(id)arg1;

@end
