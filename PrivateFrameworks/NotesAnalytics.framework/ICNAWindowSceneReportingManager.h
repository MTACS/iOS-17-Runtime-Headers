
@interface ICNAWindowSceneReportingManager : ICNAOptedInObject {
    NSMutableDictionary * _eventReporters;
}

@property (nonatomic, retain) NSMutableDictionary *eventReporters;
@property (nonatomic, readonly) bool hasActiveWindowScenes;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)eventReporters;
- (bool)hasActiveWindowScenes;
- (id)init;
- (void)setEventReporters:(id)arg1;
- (void)windowSceneDidEnd:(id)arg1;
- (void)windowSceneMayBeResized:(id)arg1;
- (void)windowSceneWillBegin:(id)arg1;

@end
