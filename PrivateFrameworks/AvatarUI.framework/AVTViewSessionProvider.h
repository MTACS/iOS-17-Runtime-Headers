
@interface AVTViewSessionProvider : NSObject <AVTViewLayoutInfo, AVTViewSessionDelegate> {
    AVTViewSession * _activeSession;
    AVTView * _avtView;
    struct CGSize { 
        double width; 
        double height; 
    }  _avtViewBackingSize;
    UIView * _avtViewContainer;
    AVTViewUpdater * _avtViewUpdater;
    <AVTViewSessionProviderDelegate> * _delegate;
    AVTUIEnvironment * _environment;
    AVTFaceTrackingManager * _faceTrackingManager;
    NSNotificationCenter * _notificationCenter;
    AVTViewSession * _pausedTrackingSession;
    AVTViewSession * _pendingSession;
    id /* block */  _viewCreator;
}

@property (nonatomic, retain) AVTViewSession *activeSession;
@property (nonatomic, retain) AVTView *avtView;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } avtViewBackingSize;
@property (nonatomic, retain) UIView *avtViewContainer;
@property (nonatomic, retain) AVTViewUpdater *avtViewUpdater;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTViewSessionProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, retain) AVTFaceTrackingManager *faceTrackingManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, retain) AVTViewSession *pausedTrackingSession;
@property (nonatomic, retain) AVTViewSession *pendingSession;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) id /* block */ viewCreator;

+ (struct CGSize { double x1; double x2; })backingSizeForEnvironment:(id)arg1;
+ (id /* block */)creatorForAVTRecordView;
+ (id /* block */)creatorForAVTView;

- (void).cxx_destruct;
- (void)activateNextSession;
- (id)activeSession;
- (id)avtView;
- (struct CGSize { double x1; double x2; })avtViewBackingSize;
- (id)avtViewContainer;
- (id)avtViewUpdater;
- (void)createContainerAndViewIfNeeded;
- (void)dealloc;
- (id)delegate;
- (void)didLosePrimaryStatusWithSessionToPause:(id)arg1;
- (id)environment;
- (id)faceTrackingManager;
- (void)handleProviderReleasesPrimaryStatusNotification:(id)arg1;
- (void)handleProviderTakesPrimaryStatusNotification:(id)arg1;
- (id)initWithAVTViewBackingSize:(struct CGSize { double x1; double x2; })arg1 viewCreator:(id /* block */)arg2 environment:(id)arg3;
- (id)notificationCenter;
- (id)pausedTrackingSession;
- (id)pendingSession;
- (void)recoverPrimaryStatus;
- (void)sessionDidTearDown:(id)arg1;
- (id)sessionWithDidBecomeActiveHandler:(id /* block */)arg1 tearDownHandler:(id /* block */)arg2;
- (void)setActiveSession:(id)arg1;
- (void)setAvtView:(id)arg1;
- (void)setAvtViewContainer:(id)arg1;
- (void)setAvtViewUpdater:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFaceTrackingManager:(id)arg1;
- (void)setPausedTrackingSession:(id)arg1;
- (void)setPendingSession:(id)arg1;
- (id /* block */)viewCreator;

@end
