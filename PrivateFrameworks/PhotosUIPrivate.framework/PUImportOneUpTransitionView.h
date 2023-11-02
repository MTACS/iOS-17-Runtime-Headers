
@interface PUImportOneUpTransitionView : PUImportOneUpCell <PUImportOneUpCellDisplayDelegate> {
    PUImportOneUpCellBadgeView * _badgeView;
    NSArray * _badgeViewOffsetConstraints;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrame;
    double  _initialPhotoViewAlpha;
    PXImportMediaProvider * _mediaProvider;
    UIImage * _startingImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetFrame;
    double  _targetPhotoViewAlpha;
}

@property (nonatomic, readonly) PUImportOneUpCellBadgeView *badgeView;
@property (nonatomic, readonly) NSArray *badgeViewOffsetConstraints;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialFrame;
@property (nonatomic) double initialPhotoViewAlpha;
@property (nonatomic, retain) PXImportMediaProvider *mediaProvider;
@property (nonatomic, retain) UIImage *startingImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetFrame;
@property (nonatomic) double targetPhotoViewAlpha;

+ (double)interpolatedValueBetweenInitialValue:(double)arg1 andFinalValue:(double)arg2 atProgress:(double)arg3;

- (void).cxx_destruct;
- (id)badgeView;
- (id)badgeViewOffsetConstraints;
- (void*)contextForObservingViewModelChanges;
- (double)currentProgress;
- (void)importOneUpCell:(id)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
- (void)importOneUpCell:(id)arg1 requestedBadgeUpdateForImportItem:(id)arg2;
- (long long)importOneUpCell:(id)arg1 requestedThumbnailForImportItem:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithImportItem:(id)arg1 startingImage:(id)arg2 mediaProvider:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrame;
- (double)initialPhotoViewAlpha;
- (id)mediaProvider;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInitialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInitialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 targetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setInitialPhotoViewAlpha:(double)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setPhotoViewInitialAlpha:(double)arg1 targetAlpha:(double)arg2;
- (void)setStartingImage:(id)arg1;
- (void)setTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTargetPhotoViewAlpha:(double)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)startingImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFrame;
- (double)targetPhotoViewAlpha;
- (void)updateAlphaIfNeeded;
- (void)updateBadgeView;
- (void)updateConstraints;

@end
