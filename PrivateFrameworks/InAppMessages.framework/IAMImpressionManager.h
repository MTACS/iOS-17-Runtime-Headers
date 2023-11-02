
@interface IAMImpressionManager : NSObject {
    NSMutableDictionary * _activeImpressionForMessageIdentifierFromTargetIdentifier;
    <IAMImpressionManagerDelegate> * _delegate;
    NSMutableDictionary * _inactiveImpressionForMessageIdentifierFromTargetIdentifier;
    bool  _isApplicationActive;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic) <IAMImpressionManagerDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_endImpressionForMessageWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2 displayEndTime:(id)arg3;
- (void)_handleApplicationDidBecomeActive;
- (void)_handleApplicationWillResignActive;
- (void)_reportImpression:(id)arg1;
- (void)_reportImpressionEventWithDictionary:(id)arg1;
- (bool)_startImpressionForMessageEntry:(id)arg1 fromTargetWithIdentifier:(id)arg2 displayStartTime:(id)arg3;
- (void)_transitionToActiveState;
- (void)_transitionToInactiveState;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)messageEntry:(id)arg1 didAppearFromTargetWithIdentifier:(id)arg2 atTime:(id)arg3;
- (void)messageWithIdentifier:(id)arg1 didDisappearFromTargetWithIdentifier:(id)arg2 atTime:(id)arg3;
- (void)setDelegate:(id)arg1;

@end
