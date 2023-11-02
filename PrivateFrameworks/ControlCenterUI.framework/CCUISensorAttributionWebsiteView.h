
@interface CCUISensorAttributionWebsiteView : SBFView <CCUISensorAttributionViewAnimating, UILargeContentViewerInteractionDelegate> {
    UILabel * _websiteLabel;
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

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cachedExpandedRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *websiteLabel;

- (void).cxx_destruct;
- (id)_titleLabelForSensorActivityData:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedExpandedRect;
- (id)initWithSensorActivityData:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2;
- (id)largeContentTitle;
- (bool)scalesLargeContentImage;
- (void)setBlurRadius:(double)arg1;
- (void)setCachedExpandedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setWebsiteLabel:(id)arg1;
- (bool)showsLargeContentViewer;
- (id)websiteLabel;

@end
