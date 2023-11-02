
@interface AEFileBackedAssessmentStateReader : NSObject <AEAssessmentStateReading> {
    bool  _active;
    NSURL * _assessmentFileURL;
    <AEFileSystemPrimitives> * _fileSystemPrimitives;
    NSObject<OS_dispatch_queue> * _queue;
    <AEObservation> * _stateChangeNotificationObservation;
    <AESystemNotificationPrimitives> * _systemNotificationPrimitives;
}

@property (getter=isActive, nonatomic) bool active;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSystemNotificationPrimitives:(id)arg1 fileSystemPrimitives:(id)arg2 assessmentFileURL:(id)arg3 queue:(id)arg4;
- (bool)isActive;
- (void)setActive:(bool)arg1;

@end
