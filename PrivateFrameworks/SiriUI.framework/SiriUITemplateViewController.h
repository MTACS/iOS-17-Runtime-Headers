
@interface SiriUITemplateViewController : UIViewController {
    bool  _active;
    bool  _compressed;
    <SiriUITemplateViewControllerDelegate> * _delegate;
    <SiriUITemplateModel> * _templateModel;
}

@property (getter=isActive, nonatomic) bool active;
@property (getter=isCompressed, nonatomic) bool compressed;
@property (nonatomic) <SiriUITemplateViewControllerDelegate> *delegate;
@property (nonatomic, retain) <SiriUITemplateModel> *templateModel;
@property (nonatomic, readonly) <SiriUITemplateModelPrivate> *templateModelPrivate;
@property (nonatomic, retain) UIView<SiriUITemplateView> *view;

+ (id)templateViewControllerForTemplateModel:(id)arg1;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_initWithTemplateModel:(id)arg1;
- (id)delegate;
- (bool)isActive;
- (bool)isCompressed;
- (void)loadView;
- (void)prepareForDismissal;
- (void)setActive:(bool)arg1;
- (void)setCompressed:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTemplateModel:(id)arg1;
- (id)templateModel;
- (id)templateModelPrivate;

@end
