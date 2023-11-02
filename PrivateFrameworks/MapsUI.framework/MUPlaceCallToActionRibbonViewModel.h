
@interface MUPlaceCallToActionRibbonViewModel : MUPlaceRibbonItemViewModel {
    MUPlaceRibbonItemViewModel * _callToActionViewModel;
    MUPlaceCallToActionAppearance * _submissionStatus;
}

@property (nonatomic, retain) MUPlaceCallToActionAppearance *submissionStatus;

- (void).cxx_destruct;
- (void)_updateInternalState;
- (id)initWithSubmissionStatus:(id)arg1;
- (bool)isTappable;
- (void)setSubmissionStatus:(id)arg1;
- (id)submissionStatus;
- (id /* block */)titleStringProvider;
- (id /* block */)valueStringProvider;

@end
