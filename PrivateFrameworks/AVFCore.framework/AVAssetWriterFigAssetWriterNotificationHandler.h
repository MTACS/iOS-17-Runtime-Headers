
@interface AVAssetWriterFigAssetWriterNotificationHandler : NSObject {
    int  _didNotCallDelegate;
    struct OpaqueFigAssetWriter { } * _figAssetWriter;
    int  _notificationHandlersAreRegistered;
    AVWeakReference * _weakReferenceToDelegate;
    AVWeakReference * _weakReferenceToSelf;
}

@property <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> *delegate;
@property (getter=_weakReferenceToDelegate, setter=_setWeakReferenceToDelegate:, retain) AVWeakReference *weakReferenceToDelegate;

- (void)_callDelegateIfNotCalledWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_handleCompletedWritingNotification;
- (void)_handleFailedNotificationWithError:(id)arg1;
- (void)_handleServerDiedNotification;
- (void)_setWeakReferenceToDelegate:(id)arg1;
- (void)_teardownNotificationHandlers;
- (id)_weakReferenceToDelegate;
- (void)dealloc;
- (id)delegate;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1;
- (void)setDelegate:(id)arg1;

@end
