
@interface RespiratoryHealthHeroView : UIView {
    RespiratoryHealthHeroCountdownLabel * _countdownLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _countdownLabelMediumFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _heroImageMediumFrame;
    UIImageView * _heroImageView;
    double  _preferredWidth;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _watchImageMediumFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _watchImageSize;
    UIImageView * _watchImageView;
}

@property (nonatomic) double preferredWidth;

- (void).cxx_destruct;
- (void)_updateHeroUIWithScaleFactor:(double)arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)preferredWidth;
- (void)setPreferredWidth:(double)arg1;
- (double)validScaleFactorForCandidate:(double)arg1;

@end
