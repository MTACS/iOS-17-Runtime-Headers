
@interface CCUISensorEntityNameAndIconView : SBFView <CCUISensorAttributionViewAnimating> {
    UILabel * _appNameLabel;
    UIImageView * _entityIconView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  cachedExpandedRect;
}

@property (nonatomic, retain) UILabel *appNameLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cachedExpandedRect;
@property (nonatomic, retain) UIImageView *entityIconView;

+ (double)horizontalPaddingBetweenIconAndLabel;
+ (struct CGSize { double x1; double x2; })iconSize;
+ (long long)maximumNumberOfLines;

- (void).cxx_destruct;
- (id)_titleLabelForSensorAttributionEntity:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2;
- (id)appNameLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedExpandedRect;
- (id)entityIconView;
- (id)initWithSensorEntity:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2;
- (id)largeContentTitle;
- (bool)scalesLargeContentImage;
- (void)setAppNameLabel:(id)arg1;
- (void)setBlurRadius:(double)arg1;
- (void)setCachedExpandedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEntityIconView:(id)arg1;
- (bool)showsLargeContentViewer;

@end
