
@interface PromotedContent.JourneyMetricsHelper : NSObject <APPCCarouselMetricsHelping, APPCJourneyMetricsHelping, APPCMetricRegister> {
    void $__lazy_storage_$_partiallyShownSet;
    void $__lazy_storage_$_shownSet;
    void adServerEnvironment;
    void clientSource;
    void contextIdentifier;
    void diagnostics;
    void didImpress;
    void didUnload;
    void eventCount;
    void hasBeenOnScreen;
    void hasBeenPlaced;
    void impressionThresholdDuration;
    void interactionThreshold;
    void interactionThresholdVOEnabled;
    void interactionTime;
    void isCurrentlyOnScreen;
    void journeyIdentifier;
    void leftAdDestinationWasReported;
    void notificationOwner;
    void orderVendor;
    void percentVisible;
    void placedProperties;
    void primitiveCreator;
    void promotedContent;
    void promotedContentIdentifier;
    void stop;
    void unfilledReasons;
    void unloadManager;
    void unloadReason;
    void viewReady;
    void wasCreated;
}

@property (nonatomic, retain) _TtC15PromotedContent31JourneyMetricsHelperDiagnostics *diagnostics;
@property (nonatomic) bool didImpress;
@property (nonatomic) bool didUnload;
@property (nonatomic) bool hasBeenOnScreen;
@property (nonatomic) double impressionThresholdDuration;
@property (nonatomic) bool isCurrentlyOnScreen;
@property (nonatomic, copy) NSString *journeyIdentifier;
@property (nonatomic, retain) <APMetricPrimitiveCreating> *primitiveCreator;
@property (nonatomic) <APPCPromotableContent> *promotedContent;
@property (nonatomic, copy) NSString *promotedContentIdentifier;

// Image: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent

- (void).cxx_destruct;
- (void)adMarkerInteracted;
- (void)addUnfilledReason:(long long)arg1;
- (void)contentLoadFailure;
- (void)createdWithAdType:(long long)arg1;
- (void)createdWithAdType:(long long)arg1 container:(long long)arg2;
- (void)createdWithAdType:(long long)arg1 container:(long long)arg2 format:(long long)arg3;
- (void)dealloc;
- (id)debugging;
- (void)delivered;
- (id)diagnostics;
- (bool)didImpress;
- (bool)didUnload;
- (void)discardedWithCode:(long long)arg1;
- (void)exceededContainer;
- (void)getAppWithButtonState:(long long)arg1 timeToPreviousInstall:(long long)arg2;
- (bool)hasBeenOnScreen;
- (double)impressionThresholdDuration;
- (id)init;
- (void)interacted;
- (void)interactedAtXPos:(float)arg1 yPos:(float)arg2;
- (void)interactedWithElementID:(unsigned char)arg1 atXPos:(float)arg2 yPos:(float)arg3;
- (bool)isCurrentlyOnScreen;
- (id)journeyIdentifier;
- (void)loaded;
- (void)notConsumedWithCode:(long long)arg1 placeholder:(bool)arg2;
- (void)offScreenWithCollapsed:(bool)arg1;
- (void)onScreenWithCollapsed:(bool)arg1;
- (void)placedWithPlacementType:(long long)arg1 placement:(long long)arg2;
- (void)placedWithPlacementType:(long long)arg1 placement:(long long)arg2 position:(long long)arg3;
- (void)placedWithPlacementType:(long long)arg1 placement:(long long)arg2 unfilledReason:(long long)arg3;
- (void)placedWithPlacementType:(long long)arg1 placement:(long long)arg2 wasNativeSlot:(bool)arg3;
- (id)primitiveCreator;
- (id)promotedContent;
- (id)promotedContentIdentifier;
- (void)ready;
- (void)registerHandlerForAllMetricsWithClosure:(id /* block */)arg1;
- (void)removeHandler;
- (void)replacedWithHelper:(id)arg1;
- (void)setDiagnostics:(id)arg1;
- (void)setDidImpress:(bool)arg1;
- (void)setDidUnload:(bool)arg1;
- (void)setHasBeenOnScreen:(bool)arg1;
- (void)setImpressionThresholdDuration:(double)arg1;
- (void)setIsCurrentlyOnScreen:(bool)arg1;
- (void)setJourneyIdentifier:(id)arg1;
- (void)setPrimitiveCreator:(id)arg1;
- (void)setPromotedContent:(id)arg1;
- (void)setPromotedContentIdentifier:(id)arg1;
- (void)unloadedWithReason:(long long)arg1;
- (void)updateElementsShownWithShown:(id)arg1 partiallyShown:(id)arg2;
- (void)userReturnedFromInteractionWithIsVoiceOverEnabled:(bool)arg1;
- (void)userReturnedFromInteractionWithIsVoiceOverEnabled:(bool)arg1 ignoreVisibilityState:(bool)arg2;
- (void)visibleWithPercent:(long long)arg1 starting:(id)arg2 duration:(double)arg3 collapsed:(bool)arg4;
- (void)visibleWithPercent:(long long)arg1 starting:(id)arg2 duration:(double)arg3 scrollVelocity:(float)arg4 collapsed:(bool)arg5;
- (void)webAdRemoved;

// Image: /System/Library/PrivateFrameworks/PromotedContentUI.framework/PromotedContentUI

- (id)isVoiceOverRunning;

@end
