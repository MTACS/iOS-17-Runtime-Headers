
@interface SiriUIActivityIndicatorTemplateViewController : SiriUITemplateViewController

@property (nonatomic, retain) <SiriUIActivityIndicatorTemplateModel> *templateModel;
@property (nonatomic, retain) SiriUIActivityIndicatorTemplateView *view;

- (void)loadView;

@end
