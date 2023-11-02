
@protocol MNGuidanceManagerDelegate <NSObject>

@required

- (void)guidanceManager:(void *)arg1 announce:(void *)arg2 isImportant:(void *)arg3 shortPromptType:(void *)arg4 ignorePromptStyle:(void *)arg5 stage:(void *)arg6 completionBlock:(void *)arg7; // needs 7 arg types, found 12: MNGuidanceManager *, NSString *, bool, unsigned long long, bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)guidanceManager:(MNGuidanceManager *)arg1 didProcessSpeechEvent:(GEOComposedGuidanceEvent *)arg2;
- (void)guidanceManager:(MNGuidanceManager *)arg1 hideJunctionViewForId:(NSUUID *)arg2;
- (void)guidanceManager:(MNGuidanceManager *)arg1 hideLaneDirectionsForId:(NSUUID *)arg2;
- (void)guidanceManager:(MNGuidanceManager *)arg1 newGuidanceEventFeedback:(MNGuidanceEventFeedback *)arg2;
- (void)guidanceManager:(MNGuidanceManager *)arg1 showJunctionView:(MNGuidanceJunctionViewInfo *)arg2;
- (void)guidanceManager:(MNGuidanceManager *)arg1 showLaneDirections:(MNGuidanceLaneInfo *)arg2;
- (void)guidanceManager:(MNGuidanceManager *)arg1 triggerHaptics:(int)arg2;
- (void)guidanceManager:(MNGuidanceManager *)arg1 updateSignsWithARInfo:(NSArray *)arg2;
- (void)guidanceManager:(MNGuidanceManager *)arg1 updateSignsWithInfo:(MNGuidanceSignInfo *)arg2;
- (void)guidanceManager:(MNGuidanceManager *)arg1 updatedGuidanceEventFeedback:(MNGuidanceEventFeedback *)arg2;
- (void)guidanceManager:(MNGuidanceManager *)arg1 usePersistentDisplay:(bool)arg2;
- (void)guidanceManager:(MNGuidanceManager *)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)guidanceManager:(MNGuidanceManager *)arg1 willProcessSpeechEvent:(GEOComposedGuidanceEvent *)arg2;
- (void)guidanceManagerBeginGuidanceUpdate:(MNGuidanceManager *)arg1;
- (void)guidanceManagerEndGuidanceUpdate:(MNGuidanceManager *)arg1;
- (bool)guidanceManagerIsRerouting;
- (bool)isCurrentlySpeaking;
- (int)navigationState;

@end
