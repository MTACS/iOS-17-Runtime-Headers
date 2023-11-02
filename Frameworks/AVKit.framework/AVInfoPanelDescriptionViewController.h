
@interface AVInfoPanelDescriptionViewController : UIViewController {
    NSArray * _actions;
    bool  _closedCaptioned;
    NSDate * _creationDate;
    AVInfoPanelDescriptionView * _descriptionView;
    double  _duration;
    NSArray * _metadata;
    NSDateFormatter * _monthDayYearFormatter;
    AVPlayerController * _playerController;
    long long  _viewingModeBadge;
    NSDateFormatter * _yearFormatter;
}

@property (nonatomic, copy) NSArray *actions;
@property (getter=isClosedCaptioned, nonatomic) bool closedCaptioned;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic) double duration;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, copy) NSArray *metadata;
@property (nonatomic) AVPlayerController *playerController;
@property (nonatomic) long long viewingModeBadge;

- (void).cxx_destruct;
- (id)_durationString;
- (void)_loadPosterFromMetadataItem:(id)arg1;
- (id)_metadataItemForIdentifiers:(id)arg1;
- (id)_releaseDateStringStyle:(long long)arg1;
- (void)_updateActionButtons;
- (void)_updatePosterViewWithImage:(id)arg1;
- (void)_updateViewsWithNewMetadata;
- (id)actions;
- (id)creationDate;
- (double)duration;
- (bool)hasContent;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isClosedCaptioned;
- (void)loadView;
- (id)metadata;
- (id)playerController;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setActions:(id)arg1;
- (void)setClosedCaptioned:(bool)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setViewingModeBadge:(long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (long long)viewingModeBadge;
- (void)willMoveToParentViewController:(id)arg1;

@end
