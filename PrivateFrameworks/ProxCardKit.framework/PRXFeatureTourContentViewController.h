
@interface PRXFeatureTourContentViewController : PRXCardContentViewController {
    NSString * _bodyText;
    PRXLabel * _bodyView;
    bool  _shouldCenterAlignText;
    NSString * _titleText;
    PRXLabel * _titleView;
}

@property (nonatomic, copy) NSString *bodyText;
@property (nonatomic, retain) PRXLabel *bodyView;
@property (nonatomic) bool shouldCenterAlignText;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, retain) PRXLabel *titleView;

- (void).cxx_destruct;
- (id)bodyText;
- (id)bodyView;
- (void)setBodyText:(id)arg1;
- (void)setBodyView:(id)arg1;
- (void)setShouldCenterAlignText:(bool)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTitleView:(id)arg1;
- (bool)shouldCenterAlignText;
- (id)titleText;
- (id)titleView;
- (void)viewDidLoad;

@end
