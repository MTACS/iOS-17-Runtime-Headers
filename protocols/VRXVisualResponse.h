
@protocol VRXVisualResponse <NSObject>

@required

- (NSArray *)aceCommands;
- (long long)backgroundMaterial;
- (bool)containsComponentsWithAction;
- (long long)currentIdiom;
- (<VRXInteractionDelegate> *)interactionDelegate;
- (bool)isRedacted;
- (void)postSiriEvent:(long long)arg1;
- (bool)requestsKeyWindow;
- (NSString *)responseViewId;
- (void)setAsrText:(NSString *)arg1;
- (void)setBackgroundMaterial:(long long)arg1;
- (void)setCurrentIdiom:(long long)arg1;
- (void)setInteractionDelegate:(id <VRXInteractionDelegate>)arg1;
- (void)setIsInAmbient:(bool)arg1 withScaleFactor:(double)arg2;
- (void)setIsRedacted:(bool)arg1;
- (void)setPlayerState:(long long)arg1 aceId:(NSString *)arg2;
- (void)setResponseViewId:(NSString *)arg1;
- (void)setSnippetWidth:(double)arg1;
- (void)setViewId:(NSString *)arg1;
- (void)setVisualResponseLocation:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)snippetWidth;
- (void)updateSharedState:(NSDictionary *)arg1;
- (void)updateSharedStateData:(NSData *)arg1;
- (NSString *)viewId;
- (long long)visualResponseLocation;

@end
