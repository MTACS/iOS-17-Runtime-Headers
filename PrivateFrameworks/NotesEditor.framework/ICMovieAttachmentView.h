
@interface ICMovieAttachmentView : ICImageAttachmentView {
    bool  _icaxIsShowingPlayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _playButtonFrame;
    UIImage * playButtonImage;
    CALayer * playButtonLayer;
}

@property (nonatomic) bool icaxIsShowingPlayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } playButtonFrame;
@property (nonatomic, retain) UIImage *playButtonImage;
@property (nonatomic, retain) CALayer *playButtonLayer;

- (void).cxx_destruct;
- (bool)accessibilityIgnoresInvertColors;
- (id)accessibilityLabel;
- (id)accessibilityUserInputLabels;
- (bool)allowsPictureInPicture;
- (void)didChangeAttachment;
- (void)didChangeMedia;
- (void)didTapAttachment:(id)arg1;
- (id)icaxHintString;
- (bool)icaxIsShowingPlayer;
- (id)placeholderImageSystemName;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })playButtonFrame;
- (id)playButtonImage;
- (id)playButtonLayer;
- (void)setIcaxIsShowingPlayer:(bool)arg1;
- (void)setPlayButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPlayButtonImage:(id)arg1;
- (void)setPlayButtonLayer:(id)arg1;
- (void)setShowLoadingImage:(bool)arg1;
- (void)sharedInit:(bool)arg1;
- (bool)shouldPlayFullscreenOnly;
- (void)updateImageSize;
- (void)willDeleteAttachment;

@end
