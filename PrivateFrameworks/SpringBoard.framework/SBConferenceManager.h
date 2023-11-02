
@interface SBConferenceManager : NSObject {
    struct MGNotificationTokenStruct { } * _faceTimeCapabilityUpdateToken;
    bool  _hasFaceTimeCapability;
    TUCallCenter * _sharedCallCenter;
}

+ (void)initialize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_faceTimeStateChanged:(id)arg1;
- (id)activeFaceTimeCall;
- (bool)activeFaceTimeCallExists;
- (bool)canStartFaceTime;
- (id)currentFaceTimeCall;
- (void)dealloc;
- (void)endFaceTime;
- (bool)faceTimeInvitationExists;
- (bool)faceTimeIsAvailable;
- (bool)hasFaceTimeCapability;
- (bool)inFaceTime;
- (bool)inFaceTimeVideo;
- (id)incomingFaceTimeCall;
- (id)init;

@end
