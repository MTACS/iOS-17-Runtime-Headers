
@interface SBHStackConfigurationIconListView : SBIconListView {
    <SBIconViewDelegate> * _iconViewDelegate;
}

@property (nonatomic) <SBIconViewDelegate> *iconViewDelegate;

- (void).cxx_destruct;
- (void)_setupCustomBackgroundConfigurationForIconView:(id)arg1;
- (Class)baseIconViewClass;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (id)iconViewDelegate;
- (void)setIconViewDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
