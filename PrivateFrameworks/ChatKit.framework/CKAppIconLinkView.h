
@interface CKAppIconLinkView : UIView {
    long long  _appName;
    NSMutableArray * _constraints;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _linkFrame;
    NSString * _previewString;
    UIView * _previewView;
    CKSyndicationOnboardingTailedBubble * _tailedBubble;
}

@property (nonatomic) long long appName;
@property (nonatomic, retain) NSMutableArray *constraints;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } linkFrame;
@property (nonatomic, retain) NSString *previewString;
@property (nonatomic, retain) UIView *previewView;
@property (nonatomic, retain) CKSyndicationOnboardingTailedBubble *tailedBubble;

- (void).cxx_destruct;
- (long long)appName;
- (id)constraints;
- (id)generateCroppedImageFromPreviewImage:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAppName:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })linkFrame;
- (id)previewString;
- (id)previewView;
- (void)setAppName:(long long)arg1;
- (void)setConstraints:(id)arg1;
- (void)setLinkFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPreviewImageForImage:(id)arg1;
- (void)setPreviewString:(id)arg1;
- (void)setPreviewView:(id)arg1;
- (void)setTailedBubble:(id)arg1;
- (void)setUpViewsForApp:(long long)arg1;
- (id)tailedBubble;
- (void)updateConstraints;

@end
