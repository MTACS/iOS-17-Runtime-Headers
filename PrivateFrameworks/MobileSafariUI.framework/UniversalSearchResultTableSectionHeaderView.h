
@interface UniversalSearchResultTableSectionHeaderView : UITableViewHeaderFooterView <UniversalSearchSectionHeaderViewWithFeedbackDelegate> {
    UIButton * _feedbackButton;
    <UniversalSearchFeedbackDelegate> * _feedbackDelegate;
    NSURL * _reportProblemURL;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <UniversalSearchFeedbackDelegate> *feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *reportProblemURL;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_handleParsecFeedbackButtonTap:(id)arg1;
- (id)feedbackDelegate;
- (id)reportProblemURL;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setReportProblemURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
