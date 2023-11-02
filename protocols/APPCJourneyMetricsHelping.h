
@protocol APPCJourneyMetricsHelping

@required

- (void)adMarkerInteracted;
- (void)addUnfilledReason:(long long)arg1;
- (void)contentLoadFailure;
- (void)createdWithAdType:(long long)arg1;
- (void)createdWithAdType:(long long)arg1 container:(long long)arg2;
- (void)createdWithAdType:(long long)arg1 container:(long long)arg2 format:(long long)arg3;
- (NSString *)debugging;
- (void)delivered;
- (_TtC15PromotedContent31JourneyMetricsHelperDiagnostics *)diagnostics;
- (bool)didImpress;
- (bool)didUnload;
- (void)discardedWithCode:(long long)arg1;
- (void)exceededContainer;
- (void)getAppWithButtonState:(long long)arg1 timeToPreviousInstall:(long long)arg2;
- (bool)hasBeenOnScreen;
- (double)impressionThresholdDuration;
- (void)interacted;
- (void)interactedAtXPos:(float)arg1 yPos:(float)arg2;
- (void)interactedWithElementID:(unsigned char)arg1 atXPos:(float)arg2 yPos:(float)arg3;
- (bool)isCurrentlyOnScreen;
- (NSString *)journeyIdentifier;
- (void)loaded;
- (void)notConsumedWithCode:(long long)arg1 placeholder:(bool)arg2;
- (void)offScreenWithCollapsed:(bool)arg1;
- (void)onScreenWithCollapsed:(bool)arg1;
- (void)placedWithPlacementType:(long long)arg1 placement:(long long)arg2;
- (void)placedWithPlacementType:(long long)arg1 placement:(long long)arg2 position:(long long)arg3;
- (void)placedWithPlacementType:(long long)arg1 placement:(long long)arg2 unfilledReason:(long long)arg3;
- (void)placedWithPlacementType:(long long)arg1 placement:(long long)arg2 wasNativeSlot:(bool)arg3;
- (<APMetricPrimitiveCreating> *)primitiveCreator;
- (<APPCPromotableContent> *)promotedContent;
- (NSString *)promotedContentIdentifier;
- (void)ready;
- (void)replacedWithHelper:(id <APPCJourneyMetricsHelping>)arg1;
- (void)setImpressionThresholdDuration:(double)arg1;
- (void)setPromotedContent:(id <APPCPromotableContent>)arg1;
- (void)unloadedWithReason:(long long)arg1;
- (void)userReturnedFromInteractionWithIsVoiceOverEnabled:(bool)arg1;
- (void)userReturnedFromInteractionWithIsVoiceOverEnabled:(bool)arg1 ignoreVisibilityState:(bool)arg2;
- (void)visibleWithPercent:(long long)arg1 starting:(NSDate *)arg2 duration:(double)arg3 collapsed:(bool)arg4;
- (void)visibleWithPercent:(long long)arg1 starting:(NSDate *)arg2 duration:(double)arg3 scrollVelocity:(float)arg4 collapsed:(bool)arg5;
- (void)webAdRemoved;

@end
