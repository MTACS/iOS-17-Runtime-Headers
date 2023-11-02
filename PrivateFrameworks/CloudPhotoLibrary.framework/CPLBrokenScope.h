
@interface CPLBrokenScope : NSObject {
    CPLEngineLibrary * _engineLibrary;
    CPLEngineScope * _engineScope;
    bool  _internal;
    NSDate * _lastShownAlertDate;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldShowAlertToUser;
}

@property (nonatomic, readonly) NSString *alertMessage;
@property (nonatomic, readonly) NSString *alertTitle;
@property (nonatomic, readonly) NSString *alternateRecoverDescription;
@property (nonatomic, readonly) NSString *brokenMessage;
@property (nonatomic, readonly) NSString *brokenTitle;
@property (nonatomic, readonly) NSString *createRadarButtonTitle;
@property (nonatomic, readonly) NSURL *createRadarURL;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (nonatomic, readonly) CPLEngineScope *engineScope;
@property (nonatomic, readonly) bool hasEngineRecoveryMechanism;
@property (getter=isInternal, nonatomic, readonly) bool internal;
@property (nonatomic, readonly) NSString *internalRecoveryInstructions;
@property (nonatomic, readonly) NSString *radarDescription;
@property (nonatomic, readonly) NSString *radarTitle;
@property (nonatomic, readonly) NSString *readMoreButtonTitle;
@property (nonatomic, readonly) NSURL *readMoreURL;
@property (nonatomic, readonly) NSString *recoverButtonTitle;
@property (nonatomic, readonly) bool shouldShowAlertToUser;

- (void).cxx_destruct;
- (void)_showAlertWithMessage:(id)arg1 readMoreURL:(id)arg2 createRadarURL:(id)arg3 showsRecoverButton:(bool)arg4;
- (id)alertMessage;
- (id)alertTitle;
- (id)alternateRecoverDescription;
- (id)brokenMessage;
- (id)brokenTitle;
- (id)createRadarButtonTitle;
- (id)createRadarURL;
- (id)engineLibrary;
- (id)engineScope;
- (bool)hasEngineRecoveryMechanism;
- (id)initWithEngineScope:(id)arg1 engineLibrary:(id)arg2;
- (id)internalRecoveryInstructions;
- (bool)isInternal;
- (id)radarDescription;
- (id)radarTitle;
- (id)readMoreButtonTitle;
- (id)readMoreURL;
- (id)recoverButtonTitle;
- (void)recoverUsingEngineWithCompletionHandler:(id /* block */)arg1;
- (bool)shouldShowAlertToUser;
- (void)showAlertToUser;

@end
