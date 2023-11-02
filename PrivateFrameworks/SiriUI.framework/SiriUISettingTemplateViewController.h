
@interface SiriUISettingTemplateViewController : SiriUIBaseTemplateViewController

@property (nonatomic, retain) <SiriUISettingTemplateModel> *templateModel;
@property (nonatomic, retain) SiriUISettingTemplateView *view;

- (Class)templateViewClass;

@end
