
@interface SBSystemNotesPlaceholderContentProvider : NSObject <SBScenePlaceholderContentViewProvider> {
    <SBScenePlaceholderContentViewProviderDelegate> * _delegate;
    UIImage * _snapshot;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBScenePlaceholderContentViewProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *snapshot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithSnapshot:(id)arg1;
- (id)sceneView:(id)arg1 requestsPlaceholderContentViewWithContext:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (id)snapshot;

@end
