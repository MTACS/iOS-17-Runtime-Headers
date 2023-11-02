
@interface WebUITextIndicatorData : NSObject {
    UIImage * _contentImage;
    double  _contentImageScaleFactor;
    UIImage * _contentImageWithHighlight;
    UIImage * _contentImageWithoutSelection;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentImageWithoutSelectionRectInRootViewCoordinates;
    UIImage * _dataInteractionImage;
    UIColor * _estimatedBackgroundColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _selectionRectInRootViewCoordinates;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _textBoundingRectInRootViewCoordinates;
    NSArray * _textRectsInBoundingRectCoordinates;
}

@property (nonatomic, retain) UIImage *contentImage;
@property (nonatomic) double contentImageScaleFactor;
@property (nonatomic, retain) UIImage *contentImageWithHighlight;
@property (nonatomic, retain) UIImage *contentImageWithoutSelection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentImageWithoutSelectionRectInRootViewCoordinates;
@property (nonatomic, retain) UIImage *dataInteractionImage;
@property (nonatomic, retain) UIColor *estimatedBackgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } selectionRectInRootViewCoordinates;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } textBoundingRectInRootViewCoordinates;
@property (nonatomic, retain) NSArray *textRectsInBoundingRectCoordinates;

- (id)contentImage;
- (double)contentImageScaleFactor;
- (id)contentImageWithHighlight;
- (id)contentImageWithoutSelection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentImageWithoutSelectionRectInRootViewCoordinates;
- (id)dataInteractionImage;
- (void)dealloc;
- (id)estimatedBackgroundColor;
- (id)initWithImage:(struct CGImage { }*)arg1 scale:(double)arg2;
- (id)initWithImage:(struct CGImage { }*)arg1 textIndicatorData:(const void*)arg2 scale:(double)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionRectInRootViewCoordinates;
- (void)setContentImage:(id)arg1;
- (void)setContentImageScaleFactor:(double)arg1;
- (void)setContentImageWithHighlight:(id)arg1;
- (void)setContentImageWithoutSelection:(id)arg1;
- (void)setContentImageWithoutSelectionRectInRootViewCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDataInteractionImage:(id)arg1;
- (void)setEstimatedBackgroundColor:(id)arg1;
- (void)setSelectionRectInRootViewCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTextBoundingRectInRootViewCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTextRectsInBoundingRectCoordinates:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textBoundingRectInRootViewCoordinates;
- (id)textRectsInBoundingRectCoordinates;

@end
