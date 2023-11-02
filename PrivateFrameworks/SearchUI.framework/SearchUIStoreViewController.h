
@interface SearchUIStoreViewController : SKStoreProductViewController <SKStoreProductViewControllerDelegate> {
    <SFFeedbackListener> * _feedbackListener;
    unsigned long long  _queryId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property <SFFeedbackListener> *feedbackListener;
@property (readonly) unsigned long long hash;
@property unsigned long long queryId;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)feedbackListener;
- (id)initWithIdentifier:(id)arg1 feedbackListener:(id)arg2 queryId:(unsigned long long)arg3;
- (void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (unsigned long long)queryId;
- (void)setFeedbackListener:(id)arg1;
- (void)setQueryId:(unsigned long long)arg1;

@end
