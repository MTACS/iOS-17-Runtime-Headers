
@interface MUPlaceCoverPhotoTransitionController : NSObject {
    long long  _currentScrollDirection;
    double  _expansionProgress;
    struct MUPlaceHeaderMetrics { 
        double topToTitleSpacing; 
        struct MUPlaceCoverPhotoMetrics { 
            double aspectRatio; 
            bool hasLogo; 
            struct CGSize { 
                double width; 
                double height; 
            } logoSize; 
            double coverPhotoBottomToLogoBottomSpacing; 
            double coverPhotoContainerToTitleSpacing; 
            double startingLogoAlphaTransitionValue; 
            double endingLogoAlphaTransitionValue; 
        } coverPhotoMetrics; 
    }  _metrics;
    id /* block */  _updateHandler;
}

@property (nonatomic, readonly) double coverPhotoAlpha;
@property (nonatomic, readonly) long long currentScrollDirection;
@property (nonatomic) double expansionProgress;
@property (nonatomic, readonly) bool hideLogo;
@property (nonatomic, readonly) double interpolatedCoverPhotoToTitleSpacing;
@property (nonatomic, readonly) double logoImageAlpha;
@property (nonatomic, readonly) bool shouldBlurChromeHeaderButtons;

- (void).cxx_destruct;
- (double)_logoImageAlphaForVerticalDrag;
- (void)_updateWithOldProgress:(double)arg1;
- (double)coverPhotoAlpha;
- (double)coverPhotoHeightForProposedWidth:(double)arg1;
- (long long)currentScrollDirection;
- (double)expansionProgress;
- (bool)hideLogo;
- (id)initWithMetrics:(struct MUPlaceHeaderMetrics { double x1; struct MUPlaceCoverPhotoMetrics { double x_2_1_1; bool x_2_1_2; struct CGSize { double x_3_2_1; double x_3_2_2; } x_2_1_3; double x_2_1_4; double x_2_1_5; double x_2_1_6; double x_2_1_7; } x2; })arg1 updateHandler:(id /* block */)arg2;
- (double)interpolatedCoverPhotoToTitleSpacing;
- (double)logoImageAlpha;
- (void)setExpansionProgress:(double)arg1;
- (bool)shouldBlurChromeHeaderButtons;

@end
