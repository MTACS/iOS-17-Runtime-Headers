
@protocol SiriUIMapTemplateViewDelegate <NSObject>

@required

- (void)mapTemplateView:(SiriUIMapTemplateView *)arg1 didModifyPlacemark:(CLPlacemark *)arg2;
- (void)mapTemplateViewDidSelectMap:(SiriUIMapTemplateView *)arg1;

@end
