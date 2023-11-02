
@interface AXSpeakFingerManager : NSObject <AXOratorDelegate, AXUIClientDelegate, AXUIService> {
    AXElement * _currentSpeakFingerElement;
    NSArray * _elementsForUnitTests;
    UIImpactFeedbackGenerator * _hapticGenerator;
    bool  _inUnitTestMode;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchPoint;
    AXOrator * _orator;
    unsigned long long  _speakFingerState;
    NSString * _springBoardActionHandlerId;
    NSMutableArray * _stateUpdateBlocks;
    bool  _unitTestSpeaking;
    AXUIClient * _voiceOverDisplayManagerClient;
}

@property (nonatomic, retain) AXElement *currentSpeakFingerElement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *elementsForUnitTests;
@property (nonatomic, retain) UIImpactFeedbackGenerator *hapticGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inUnitTestMode;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastTouchPoint;
@property (nonatomic, retain) AXOrator *orator;
@property (nonatomic) unsigned long long speakFingerState;
@property (nonatomic, retain) NSString *springBoardActionHandlerId;
@property (nonatomic, retain) NSMutableArray *stateUpdateBlocks;
@property (readonly) Class superclass;
@property (nonatomic) bool unitTestSpeaking;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_removeFocusRingForElement:(id)arg1;
- (void)_speakFingerStateChanged;
- (void)_updateFocusRingForWebElement:(id)arg1 remove:(bool)arg2;
- (id)currentSpeakFingerElement;
- (void)dealloc;
- (double)desiredWindowLevelForContentViewController:(id)arg1 userInteractionEnabled:(bool)arg2;
- (id)elementsForUnitTests;
- (void)fingerWasLiftedInSpeakUnderFingerMode;
- (id)hapticGenerator;
- (bool)inUnitTestMode;
- (id)init;
- (struct CGPoint { double x1; double x2; })lastTouchPoint;
- (id)orator;
- (void)oratorDidFinishSpeaking:(id)arg1;
- (id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4;
- (void)registerBlockForStateChange:(id /* block */)arg1;
- (void)setCurrentSpeakFingerElement:(id)arg1;
- (void)setCursorFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withPath:(struct CGPath { }*)arg2 withContextId:(unsigned int)arg3 element:(id)arg4 forceRefresh:(bool)arg5 animated:(bool)arg6;
- (void)setElementsForUnitTests:(id)arg1;
- (void)setHapticGenerator:(id)arg1;
- (void)setInUnitTestMode:(bool)arg1;
- (void)setLastTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOrator:(id)arg1;
- (void)setSpeakFingerState:(unsigned long long)arg1;
- (void)setSpringBoardActionHandlerId:(id)arg1;
- (void)setStateUpdateBlocks:(id)arg1;
- (void)setUnitTestSpeaking:(bool)arg1;
- (void)speakElementAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)speakFingerState;
- (void)speakUnderFingerModeFinishedTalking;
- (void)speakUnderFingerModeStarted;
- (id)springBoardActionHandlerId;
- (id)stateUpdateBlocks;
- (bool)unitTestSpeaking;
- (void)userManuallyExitedSpeakUnderFingerMode;

@end
