
@interface SiriUISelectionTemplateView : SiriUISettingTemplateView {
    UIImageView * _checkmarkImageView;
    UIButton * _selectionButton;
}

@property (nonatomic) <SiriUISelectionTemplateModel> *dataSource;

- (void).cxx_destruct;
- (void)addTargetForSelectionEvent:(id)arg1 action:(SEL)arg2;
- (id)initWithDataSource:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)removeTargetForSelectionEvent:(id)arg1 action:(SEL)arg2;

@end
