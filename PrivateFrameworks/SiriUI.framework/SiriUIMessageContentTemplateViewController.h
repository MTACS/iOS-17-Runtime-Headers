
@interface SiriUIMessageContentTemplateViewController : SiriUIBaseTemplateViewController

@property (nonatomic, retain) <SiriUIMessageContentTemplateModel> *templateModel;
@property (nonatomic, retain) SiriUIMessageContentTemplateView *view;

- (Class)templateViewClass;

@end
