
@interface PREditorLookTransition : NSObject <BSDescriptionStreamable> {
    PREditorLookSwitchingComplicationTransition * _complicationTransition;
    PREditingLook * _currentLook;
    PREditingLook * _destinationLook;
    <PREditingStandaloneLabelViewTransitioning> * _lookNameTransition;
    <CSProminentDisplayTransitioning> * _subtitleStyleTransition;
    <PREditorTitleTransitioning> * _titleScrollingTransition;
    <PREditorTitleViewControllerTransitioning> * _titleStyleTransition;
}

@property (nonatomic, retain) PREditorLookSwitchingComplicationTransition *complicationTransition;
@property (nonatomic, readonly, copy) PREditingLook *currentLook;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) PREditingLook *destinationLook;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <PREditingStandaloneLabelViewTransitioning> *lookNameTransition;
@property (nonatomic, retain) <CSProminentDisplayTransitioning> *subtitleStyleTransition;
@property (readonly) Class superclass;
@property (nonatomic, retain) <PREditorTitleTransitioning> *titleScrollingTransition;
@property (nonatomic, retain) <PREditorTitleViewControllerTransitioning> *titleStyleTransition;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (void)cancelInteractiveTransition;
- (id)complicationTransition;
- (id)currentLook;
- (id)description;
- (id)destinationLook;
- (void)finishInteractiveTransition;
- (id)initWithCurrentLook:(id)arg1 destinationLook:(id)arg2;
- (id)lookNameTransition;
- (bool)matchesCurrentLook:(id)arg1 destinationLook:(id)arg2;
- (void)setComplicationTransition:(id)arg1;
- (void)setLookNameTransition:(id)arg1;
- (void)setSubtitleStyleTransition:(id)arg1;
- (void)setTitleScrollingTransition:(id)arg1;
- (void)setTitleStyleTransition:(id)arg1;
- (id)subtitleStyleTransition;
- (id)titleScrollingTransition;
- (id)titleStyleTransition;
- (void)updateInteractiveTransition:(double)arg1;

@end
