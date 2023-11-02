
@interface AVMobileChromeControlsStyleSheet : AVMobileControlsStyleSheet {
    double  _additionalInlinePaddingForDodgingSafeArea;
    struct CGSize { 
        double width; 
        double height; 
    }  _audioRoutePickerFullScreenSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultItemFullScreenSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultItemInlineSize;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _doubleRowLayoutMargins;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _doubleRowLayoutMarginsWhenShowingScrubInstructions;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _doublerowLayoutMarginsWhenShowingCustomContentInfo;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _embeddedInlineInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _fullscreenInsets;
    UIFont * _infoLabelFont;
    double  _liveBroadcastLabelTopToBackdropTopDistance;
    double  _maximumMultiRowTransportControlsWidth;
    double  _maximumProminentPlayButtonDimension;
    double  _maximumTransportControlsWidth;
    double  _minimumProminentPlayButtonDimension;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumScrubberSize;
    double  _minimumSingleButtonTransportControlsWidth;
    double  _minimumTransportControlsWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _routePickerButtonFullScreenSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _routePickerButtonInlineSize;
    UIFont * _scrubberInfoLabelFont;
    UIFont * _scrubberTimeLabelFont;
    bool  _shouldUseCompactFullScreenSize;
    double  _spacingBetweenScrubInstructionsAndScrubber;
    double  _standardInteritemPadding;
    double  _standardPaddingFullScreen;
    double  _standardPaddingInline;
    struct CGSize { 
        double width; 
        double height; 
    }  _volumeButtonFullScreenSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _volumeButtonInlineSize;
    double  _volumeSliderCompactFullScreenWidth;
    double  _volumeSliderInlineWidth;
    double  _volumeSliderPadding;
    double  _volumeSliderRegularFullScreenWidth;
}

@property (nonatomic, readonly) double additionalInlinePaddingForDodgingSafeArea;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } audioRoutePickerFullScreenSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } defaultItemFullScreenSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } defaultItemInlineSize;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } doubleRowLayoutMargins;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } doubleRowLayoutMarginsWhenShowingScrubInstructions;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } doublerowLayoutMarginsWhenShowingCustomContentInfo;
@property (nonatomic, readonly) UIFont *infoLabelFont;
@property (nonatomic, readonly) double liveBroadcastLabelTopToBackdropTopDistance;
@property (nonatomic, readonly) double maximumMultiRowTransportControlsWidth;
@property (nonatomic, readonly) double maximumProminentPlayButtonDimension;
@property (nonatomic, readonly) double maximumTransportControlsWidth;
@property (nonatomic, readonly) double minimumProminentPlayButtonDimension;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumScrubberSize;
@property (nonatomic, readonly) double minimumSingleButtonTransportControlsWidth;
@property (nonatomic, readonly) double minimumTransportControlsWidth;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } routePickerButtonFullScreenSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } routePickerButtonInlineSize;
@property (nonatomic, readonly) UIFont *scrubberInfoLabelFont;
@property (nonatomic, readonly) UIFont *scrubberTimeLabelFont;
@property (nonatomic, readonly) double spacingBetweenScrubInstructionsAndScrubber;
@property (nonatomic, readonly) double standardInteritemPadding;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } volumeButtonFullScreenSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } volumeButtonInlineSize;
@property (nonatomic, readonly) double volumeSliderCompactFullScreenWidth;
@property (nonatomic, readonly) double volumeSliderInlineWidth;
@property (nonatomic, readonly) double volumeSliderPadding;
@property (nonatomic, readonly) double volumeSliderRegularFullScreenWidth;

- (void).cxx_destruct;
- (double)additionalInlinePaddingForDodgingSafeArea;
- (struct CGSize { double x1; double x2; })audioRoutePickerFullScreenSize;
- (struct CGSize { double x1; double x2; })defaultItemFullScreenSize;
- (struct CGSize { double x1; double x2; })defaultItemInlineSize;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })doubleRowLayoutMargins;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })doubleRowLayoutMarginsWhenShowingScrubInstructions;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })doublerowLayoutMarginsWhenShowingCustomContentInfo;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })embeddedInlineInsets;
- (id)infoLabelFont;
- (id)initWithTraitCollection:(id)arg1 shouldUseCompactFullScreenSize:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })landscapeFullscreenInsets;
- (double)liveBroadcastLabelTopToBackdropTopDistance;
- (double)maximumMultiRowTransportControlsWidth;
- (double)maximumProminentPlayButtonDimension;
- (double)maximumTransportControlsWidth;
- (double)minimumProminentPlayButtonDimension;
- (struct CGSize { double x1; double x2; })minimumScrubberSize;
- (double)minimumSingleButtonTransportControlsWidth;
- (double)minimumTransportControlsWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })portraitFullscreenInsets;
- (struct CGSize { double x1; double x2; })routePickerButtonFullScreenSize;
- (struct CGSize { double x1; double x2; })routePickerButtonInlineSize;
- (id)scrubberInfoLabelFont;
- (id)scrubberTimeLabelFont;
- (double)spacingBetweenScrubInstructionsAndScrubber;
- (double)standardInteritemPadding;
- (double)standardPaddingFullScreen;
- (double)standardPaddingInline;
- (struct CGSize { double x1; double x2; })volumeButtonFullScreenSize;
- (struct CGSize { double x1; double x2; })volumeButtonInlineSize;
- (double)volumeSliderCompactFullScreenWidth;
- (double)volumeSliderInlineWidth;
- (double)volumeSliderPadding;
- (double)volumeSliderRegularFullScreenWidth;

@end
