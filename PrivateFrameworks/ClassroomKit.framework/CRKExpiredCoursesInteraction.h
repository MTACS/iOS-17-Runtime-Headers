
@interface CRKExpiredCoursesInteraction : CATOperation {
    NSSet * _courses;
    <CRKExpiredCoursesInteractionDelegate> * _delegate;
    <CRKRequestPerformingProtocol> * _studentDaemonProxy;
    bool  mIsPrompting;
    CATRemoteTaskOperation * mLeaveControlGroupsOperation;
}

@property (nonatomic, readonly) NSSet *courses;
@property (nonatomic, readonly) <CRKExpiredCoursesInteractionDelegate> *delegate;
@property (nonatomic, readonly) <CRKRequestPerformingProtocol> *studentDaemonProxy;

+ (id)new;

- (void).cxx_destruct;
- (void)cancel;
- (id)courses;
- (id)delegate;
- (id)init;
- (id)initWithStudentDaemonProxy:(id)arg1 delegate:(id)arg2 courses:(id)arg3;
- (bool)isAsynchronous;
- (void)leaveControlGroupsOperationDidFinish:(id)arg1;
- (void)main;
- (void)removeCourses:(id)arg1;
- (id)studentDaemonProxy;

@end
