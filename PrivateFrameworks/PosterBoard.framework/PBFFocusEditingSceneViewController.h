
@interface PBFFocusEditingSceneViewController : PREditingSceneViewController {
    long long  _galleryDismissalAction;
    UIView * _galleryPreviewView;
    UIView * _posterPreviewComplicationsView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _posterPreviewFrame;
}

@property (nonatomic) long long galleryDismissalAction;
@property (nonatomic, retain) UIView *galleryPreviewView;
@property (nonatomic, retain) UIView *posterPreviewComplicationsView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } posterPreviewFrame;

- (void).cxx_destruct;
- (long long)galleryDismissalAction;
- (id)galleryPreviewView;
- (id)posterPreviewComplicationsView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })posterPreviewFrame;
- (void)setGalleryDismissalAction:(long long)arg1;
- (void)setGalleryPreviewView:(id)arg1;
- (void)setPosterPreviewComplicationsView:(id)arg1;
- (void)setPosterPreviewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
