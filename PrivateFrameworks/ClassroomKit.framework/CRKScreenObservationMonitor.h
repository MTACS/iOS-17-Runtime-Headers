
@interface CRKScreenObservationMonitor : NSObject {
    bool  _connecting;
    <CRKDarwinNotificationPublisher> * _darwinNotificationPublisher;
    <CRKScreenObservationMonitorDelegate> * _delegate;
    <CRKCancelable> * _enrollmentStatusDidChangeSubscription;
    <CRKFeatureDataStoreProtocol> * _featureDataStore;
    CRKFetchObservingInstructorsByCourseOperation * _fetchObservingInstructorsByCourseOperation;
    <CRKObservation> * _observersDidChangeObservation;
    NSDictionary * _observingInstructorsByCourse;
    <CRKStudentConnection> * _studentConnection;
    <CRKStudentConnectionPrimitives> * _studentConnectionPrimitives;
}

@property (getter=isConnecting, nonatomic) bool connecting;
@property (nonatomic, readonly) <CRKDarwinNotificationPublisher> *darwinNotificationPublisher;
@property (nonatomic) <CRKScreenObservationMonitorDelegate> *delegate;
@property (nonatomic, retain) <CRKCancelable> *enrollmentStatusDidChangeSubscription;
@property (nonatomic, readonly) <CRKFeatureDataStoreProtocol> *featureDataStore;
@property (nonatomic, retain) CRKFetchObservingInstructorsByCourseOperation *fetchObservingInstructorsByCourseOperation;
@property (nonatomic, readonly) bool hasObservingInstructors;
@property (nonatomic, retain) <CRKObservation> *observersDidChangeObservation;
@property (nonatomic, copy) NSDictionary *observingInstructorsByCourse;
@property (nonatomic, retain) <CRKStudentConnection> *studentConnection;
@property (nonatomic, readonly) <CRKStudentConnectionPrimitives> *studentConnectionPrimitives;

+ (bool)automaticallyNotifiesObserversOfObservingInstructorsByCourse;
+ (id)keyPathsForValuesAffectingHasObservingInstructors;

- (void).cxx_destruct;
- (void)beginObservingEnrollmentStatus;
- (void)connectToStudentdIfNeeded;
- (id)darwinNotificationPublisher;
- (void)dealloc;
- (id)delegate;
- (void)didEstablishStudentConnection:(id)arg1;
- (void)didLoseStudentConnection;
- (void)disconnectFromStudentdIfNeeded;
- (void)enrollmentStatusDidChange;
- (id)enrollmentStatusDidChangeSubscription;
- (id)featureDataStore;
- (void)fetchObservingInstructorsByCourse;
- (id)fetchObservingInstructorsByCourseOperation;
- (void)fetchObservingInstructorsByCourseOperationDidFinish:(id)arg1;
- (bool)hasObservingInstructors;
- (id)init;
- (id)initWithStudentConnectionPrimitives:(id)arg1 darwinNotificationPublisher:(id)arg2 featureDataStore:(id)arg3;
- (id)instructorIdentifiersByCourseIdentifier;
- (bool)isConnecting;
- (id)observersDidChangeObservation;
- (id)observingInstructorsByCourse;
- (void)setConnecting:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnrollmentStatusDidChangeSubscription:(id)arg1;
- (void)setFetchObservingInstructorsByCourseOperation:(id)arg1;
- (void)setObserversDidChangeObservation:(id)arg1;
- (void)setObservingInstructorsByCourse:(id)arg1;
- (void)setStudentConnection:(id)arg1;
- (id)studentConnection;
- (id)studentConnectionPrimitives;

@end
