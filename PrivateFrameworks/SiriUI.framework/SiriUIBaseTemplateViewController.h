
@interface SiriUIBaseTemplateViewController : SiriUITemplateViewController

@property (nonatomic, retain) SiriUIBaseTemplateView *view;

- (void)loadView;
- (Class)templateViewClass;

@end
