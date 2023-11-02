
@interface SnippetUI.VisualResponseViewController : UIViewController <VRXVisualResponse> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  anyRootView;
    void context;
}

@property (nonatomic, readonly) NSArray *aceCommands;
@property (nonatomic) long long backgroundMaterial;
@property (nonatomic, readonly) bool containsComponentsWithAction;
@property (nonatomic) long long currentIdiom;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) <VRXInteractionDelegate> *interactionDelegate;
@property (nonatomic) bool isRedacted;
@property (nonatomic, readonly) bool requestsKeyWindow;
@property (nonatomic, copy) NSString *responseViewId;
@property (nonatomic) double snippetWidth;
@property (nonatomic, copy) NSString *viewId;
@property (nonatomic) long long visualResponseLocation;

- (void).cxx_destruct;
- (id)aceCommands;
- (long long)backgroundMaterial;
- (bool)containsComponentsWithAction;
- (long long)currentIdiom;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)interactionDelegate;
- (bool)isRedacted;
- (void)postSiriEvent:(long long)arg1;
- (bool)requestsKeyWindow;
- (id)responseViewId;
- (void)setAsrText:(id)arg1;
- (void)setBackgroundMaterial:(long long)arg1;
- (void)setCurrentIdiom:(long long)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setIsInAmbient:(bool)arg1 withScaleFactor:(double)arg2;
- (void)setIsRedacted:(bool)arg1;
- (void)setPlayerState:(long long)arg1 aceId:(id)arg2;
- (void)setResponseViewId:(id)arg1;
- (void)setSnippetWidth:(double)arg1;
- (void)setViewId:(id)arg1;
- (void)setVisualResponseLocation:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)snippetWidth;
- (void)updateSharedState:(id)arg1;
- (void)updateSharedStateData:(id)arg1;
- (id)viewId;
- (long long)visualResponseLocation;

@end
