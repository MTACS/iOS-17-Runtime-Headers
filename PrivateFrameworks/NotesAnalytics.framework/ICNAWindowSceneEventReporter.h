
@interface ICNAWindowSceneEventReporter : ICNAEventReporter {
    double  _previousArea;
    NSString * _windowSceneID;
}

@property (nonatomic) double previousArea;
@property (nonatomic, readonly) NSString *saltedInstrumentationID;
@property (nonatomic, readonly) NSString *windowSceneID;

+ (double)areaOfWindowScene:(id)arg1;

- (void).cxx_destruct;
- (id)initWithSubTrackerName:(id)arg1 windowScene:(id)arg2;
- (double)previousArea;
- (id)saltedInstrumentationID;
- (void)setPreviousArea:(double)arg1;
- (void)startWindowSceneEventDurationTracking;
- (void)submitWindowSceneEvent;
- (void)submitWindowSceneResizeEventIfNecessaryWithWindowScene:(id)arg1 forceSubmit:(bool)arg2;
- (id)windowSceneID;

@end
