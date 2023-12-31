
@interface _UIDragSnappingFeedbackGenerator : _UIDragFeedbackGenerator

@property (getter=_dragSnappingConfiguration, nonatomic, readonly) _UIDragSnappingFeedbackGeneratorConfiguration *dragSnappingConfiguration;

+ (Class)_configurationClass;

- (id)_dragSnappingConfiguration;
- (void)_startLanding;
- (void)_stopLanding;
- (void)draggedObjectLanded;
- (void)draggedObjectLifted;
- (void)objectSnapped;
- (void)userInteractionEnded;
- (void)userInteractionStarted;

@end
