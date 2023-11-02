
@interface CKPhotoSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell> {
    UIImageView * _durationGradientImage;
    UILabel * _durationLabel;
    UIImage * _image;
    bool  _isLivePhoto;
    bool  _isSpatial;
    bool  _isVideo;
    UIImageView * _livePhotoImage;
    NSString * _resultIdentifier;
    UIView * _spatialBadgeView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  marginInsets;
}

@property (getter=_ck_isEditing, setter=_ck_setEditing:, nonatomic) bool _ck_editing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImageView *durationGradientImage;
@property (nonatomic, retain) UILabel *durationLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool isLivePhoto;
@property (nonatomic) bool isSpatial;
@property (nonatomic) bool isVideo;
@property (nonatomic, retain) UIImageView *livePhotoImage;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic, retain) UIView *spatialBadgeView;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_configureDurationLabelForResult:(id)arg1;
- (void)_livePhotoUpdated:(id)arg1;
- (void)_spatialStatusUpdated:(id)arg1;
- (void)_thumbnailGenerated:(id)arg1;
- (void)_videoDurationUpdated:(id)arg1;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;
- (void)dealloc;
- (id)durationGradientImage;
- (id)durationLabel;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLivePhoto;
- (bool)isSpatial;
- (bool)isVideo;
- (void)layoutSubviews;
- (id)livePhotoImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (void)prepareForReuse;
- (void)refreshForSearchTextIfNeeded:(id)arg1;
- (id)resultIdentifier;
- (void)setDurationGradientImage:(id)arg1;
- (void)setDurationLabel:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsLivePhoto:(bool)arg1;
- (void)setIsSpatial:(bool)arg1;
- (void)setIsVideo:(bool)arg1;
- (void)setLivePhotoImage:(id)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setResultIdentifier:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSpatialBadgeView:(id)arg1;
- (id)spatialBadgeView;

@end
