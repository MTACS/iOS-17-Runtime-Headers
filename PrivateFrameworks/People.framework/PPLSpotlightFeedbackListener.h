
@interface PPLSpotlightFeedbackListener : NSObject <SFFeedbackListener>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)didPerformCommand:(id)arg1;

@end
