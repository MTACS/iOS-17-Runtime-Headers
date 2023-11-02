
@interface SiriInvocationAnalytics.VoiceTriggerEventSummary : _TtCs12_SwiftObject {
    void firstPassDetectionTimestampInSec;
    void firstPassPeakScoreHS;
    void firstPassPeakScoreJS;
    void hasAppIntentEvent;
    void hasAppLaunchEvent;
    void hasDeviceUnlockEvent;
    void hasNextRejection;
    void hasNextTurn;
    void hasTextInputEvent;
    void invocationTypeId;
    void isNextTurnValid;
    void mitigationScore;
    void mitigationScoreThreshold;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  nextTurnId;
    void nextTurnInvocationSource;
    void repetitionSimilarityScore;
    void tdSpeakerRecognizerCombinedScore;
    void tdSpeakerRecognizerCombinedThreshold;
    void timeDeltaToAppIntentEventInSec;
    void timeDeltaToAppLaunchInSec;
    void timeDeltaToDeviceUnlockInSec;
    void timeDeltaToNextRejectionInSec;
    void timeDeltaToNextTurnInSec;
    void timeDeltaToTextInputInSec;
    void triggerScoreHS;
    void triggerScoreHSThreshold;
    void triggerScoreJS;
    void triggerScoreJSThreshold;
    void userActionTimeThreshold;
    void voiceTriggerConfigVersion;
}

@end
