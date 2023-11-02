
@interface SearchUIMapsViewController : MUPlaceViewController <MUPlaceViewControllerFeedbackDelegate> {
    <SFFeedbackListener> * _feedbackListener;
    unsigned long long  _queryId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property <SFFeedbackListener> *feedbackListener;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long queryId;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)feedbackListener;
- (id)initWithMapsData:(id)arg1 searchAlongTheRoute:(bool)arg2 feedbackListener:(id)arg3 queryId:(unsigned long long)arg4;
- (void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2;
- (unsigned long long)queryId;
- (void)setFeedbackListener:(id)arg1;

@end
