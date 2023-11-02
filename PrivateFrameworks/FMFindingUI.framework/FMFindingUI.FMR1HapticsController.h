
@interface FMFindingUI.FMR1HapticsController : NSObject {
    void aheadHapticPattern;
    void aheadOffHapticPattern;
    void armsReachHapticPattern;
    void armsReachOffHapticPattern;
    void buildHapticPattern;
    void connectedHapticPattern;
    void continuousHapticFactor;
    void continuousHapticFactorLogCounter;
    void continuousHapticPattern;
    void continuousHapticPlayer;
    void continuousHapticRampingFactorSpring;
    void enablePlayingAheadHaptic;
    void farHapticPattern;
    void farNearHapticPattern;
    void hapticCapability;
    void hapticDisplayLink;
    void hapticEngine;
    void hapticsMayBePlaying;
    void hasPlayedArmsReachHaptic;
    void isPlayingContinuousHapticPattern;
    void lastLoggedContinuousHapticFactor;
    void lastRenderTime;
    void levelDecreaseHapticPattern;
    void levelIncreaseHapticPattern;
    void nearbyHapticLastPlayTimestamp;
    void nearbyHapticPattern;
    void playArmsReachHapticWorkItem;
    void playBuildHapticWorkItem;
    void playNearbyHapticWorkItem;
    void playScatterHapticWorkItem;
    void playedHapticPatternHandler;
    void preNearbyHapticPattern;
    void pulseViewPattern;
    void restartContinuousHapticWorkItem;
    void scatterHapticPattern;
    void setup;
    void singleTap1HapticPattern;
    void singleTap2HapticPattern;
    void singleTap3HapticPattern;
    void singleTap4HapticPattern;
    void singleTap5HapticPattern;
    void singleTapSelectedHapticPattern;
    void singleTapSelectedHapticPatternIntensity;
    void startContinuousHapticWorkItem;
    void tapHapticContext;
    void tapHapticLastPlayTimestamp;
    void tapHapticNextPlayDelay;
    void tapHapticPlaybackPeriod;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)hapticDisplayLinkUpdateWithDisplaylink:(id)arg1;
- (id)init;

@end
