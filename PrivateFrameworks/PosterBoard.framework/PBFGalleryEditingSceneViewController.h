
@interface PBFGalleryEditingSceneViewController : PREditingSceneViewController {
    PRPosterDescriptorGalleryOptions * _descriptorGalleryOptions;
    long long  _galleryDismissalAction;
    PBFGalleryOptions * _galleryOptions;
    unsigned long long  _galleryPresentationStyle;
    UIView * _galleryPreviewComplicationsView;
    double  _galleryPreviewCornerRadius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _galleryPreviewFrame;
    NSString * _galleryPreviewType;
    NSString * _galleryPreviewUniqueIdentifier;
    UIView * _galleryPreviewView;
}

@property (nonatomic, retain) PRPosterDescriptorGalleryOptions *descriptorGalleryOptions;
@property (nonatomic) long long galleryDismissalAction;
@property (nonatomic, retain) PBFGalleryOptions *galleryOptions;
@property (nonatomic) unsigned long long galleryPresentationStyle;
@property (nonatomic, retain) UIView *galleryPreviewComplicationsView;
@property (nonatomic) double galleryPreviewCornerRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } galleryPreviewFrame;
@property (nonatomic, copy) NSString *galleryPreviewType;
@property (nonatomic, copy) NSString *galleryPreviewUniqueIdentifier;
@property (nonatomic, retain) UIView *galleryPreviewView;

- (void).cxx_destruct;
- (id)descriptorGalleryOptions;
- (long long)galleryDismissalAction;
- (id)galleryOptions;
- (unsigned long long)galleryPresentationStyle;
- (id)galleryPreviewComplicationsView;
- (double)galleryPreviewCornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })galleryPreviewFrame;
- (id)galleryPreviewType;
- (id)galleryPreviewUniqueIdentifier;
- (id)galleryPreviewView;
- (void)setDescriptorGalleryOptions:(id)arg1;
- (void)setGalleryDismissalAction:(long long)arg1;
- (void)setGalleryOptions:(id)arg1;
- (void)setGalleryPresentationStyle:(unsigned long long)arg1;
- (void)setGalleryPreviewComplicationsView:(id)arg1;
- (void)setGalleryPreviewCornerRadius:(double)arg1;
- (void)setGalleryPreviewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGalleryPreviewType:(id)arg1;
- (void)setGalleryPreviewUniqueIdentifier:(id)arg1;
- (void)setGalleryPreviewView:(id)arg1;

@end
