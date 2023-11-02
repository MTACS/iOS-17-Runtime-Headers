
@interface _CLKUIBasicTimeLabelManager : NSObject <_CLKUITimeLabelManager> {
    bool  _animationsPaused;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingRectOfMinutesBlinkerAttributedText;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingRectOfSecondsBlinkerAttributedText;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedIntrinsicSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cachedOpticalEdgeInsets;
    bool  _cachedOpticalEdgeInsetsIsValid;
    NSAttributedString * _correctAttributedText;
    CLKDevice * _device;
    bool  _hideMinutesIfZero;
    UILabel * _label;
    double  _maxWidth;
    NSAttributedString * _minutesBlinkerAttributedText;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _minutesBlinkerRange;
    bool  _primary;
    NSAttributedString * _secondsBlinkerAttributedText;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _secondsBlinkerRange;
    bool  _showSeconds;
    bool  _showSubstringFromSeparator;
    bool  _showSubstringToSeparator;
    bool  _showsBlinker;
    bool  _showsDesignator;
    bool  _showsNumbers;
    CLKUITimeLabelStyle * _style;
    UIColor * _textColor;
    CLKTimeFormatter * _timeFormatter;
    NSString * _timeText;
}

@property (nonatomic) bool animationsPaused;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicSize;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } opticalInsets;
@property (nonatomic) bool showSeconds;
@property (nonatomic) bool showsBlinker;
@property (nonatomic) bool showsNumbers;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)_attributedTextShowingBlinker:(bool)arg1 numbers:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundingRectOfBlinkerAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundingRectOfMinutesBlinker;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundingRectOfSecondsBlinker;
- (id)_initForDevice:(id)arg1 primary:(bool)arg2 withTimeFormatter:(id)arg3 options:(unsigned long long)arg4 labelFactory:(id /* block */)arg5;
- (double)_lastLineBaseline;
- (void)_updateAttributedText;
- (bool)animationsPaused;
- (id)effectiveAttributedText;
- (id)effectiveFont;
- (void)enumerateUnderlyingLabelsWithBlock:(id /* block */)arg1;
- (id)initWithForDevice:(id)arg1 timeFormatter:(id)arg2 options:(unsigned long long)arg3 timer:(id)arg4 labelFactory:(id /* block */)arg5;
- (struct CGSize { double x1; double x2; })intrinsicSize;
- (id)minutesDesignatorAttributedText;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })opticalInsets;
- (id)secondsDesignatorAttributedText;
- (void)setAnimationsPaused:(bool)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setShowSeconds:(bool)arg1;
- (void)setShowsBlinker:(bool)arg1;
- (void)setShowsDesignator:(bool)arg1;
- (void)setShowsNumbers:(bool)arg1;
- (void)setStyle:(id)arg1;
- (void)setTextColor:(id)arg1;
- (bool)showSeconds;
- (bool)showsBlinker;
- (bool)showsNumbers;
- (struct CGSize { double x1; double x2; })sizeThatFits;
- (void)sizeViewToFit;
- (id)textColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTimeText;
- (id)view;
- (id)viewForLastBaselineLayout;

@end
