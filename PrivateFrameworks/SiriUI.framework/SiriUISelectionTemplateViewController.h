
@interface SiriUISelectionTemplateViewController : SiriUISettingTemplateViewController

@property (nonatomic) <SiriUISelectionTemplateViewControllerDelegate> *delegate;
@property (nonatomic) bool selected;
@property (nonatomic, retain) <SiriUISelectionTemplateModel> *templateModel;
@property (nonatomic, retain) SiriUISelectionTemplateView *view;

- (void)_didSelectChoiceFromSender:(id)arg1;
- (void)loadView;
- (bool)selected;
- (void)setSelected:(bool)arg1;
- (Class)templateViewClass;

@end
