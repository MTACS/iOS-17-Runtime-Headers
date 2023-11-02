
@interface _UIContextMenuLayoutArbiterInput : NSObject {
    NSArray * _accessoryViews;
    struct { 
        unsigned long long attachment; 
        unsigned long long alignment; 
        double attachmentOffset; 
        double alignmentOffset; 
        long long gravity; 
    }  _preferredAnchor;
    double  _preferredContentSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _preferredEdgeInsets;
    struct CGPoint { 
        double x; 
        double y; 
    }  _preferredMenuAttachmentPoint;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredMenuSize;
    unsigned long long  _preferredPreviewFittingStrategy;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredPreviewSize;
    bool  _shouldAvoidInputViews;
    bool  _shouldConcealMenu;
    bool  _shouldUpdateAttachment;
    UITargetedPreview * _sourcePreview;
}

@property (nonatomic, retain) NSArray *accessoryViews;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; double x3; double x4; long long x5; } preferredAnchor;
@property (nonatomic) double preferredContentSpacing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredEdgeInsets;
@property (nonatomic) struct CGPoint { double x1; double x2; } preferredMenuAttachmentPoint;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredMenuSize;
@property (nonatomic) unsigned long long preferredPreviewFittingStrategy;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredPreviewSize;
@property (nonatomic) bool shouldAvoidInputViews;
@property (nonatomic) bool shouldConcealMenu;
@property (nonatomic) bool shouldUpdateAttachment;
@property (nonatomic, retain) UITargetedPreview *sourcePreview;

- (void).cxx_destruct;
- (bool)_hasVisibleMenu;
- (id)accessoryViews;
- (id)init;
- (struct { unsigned long long x1; unsigned long long x2; double x3; double x4; long long x5; })preferredAnchor;
- (double)preferredContentSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeInsets;
- (struct CGPoint { double x1; double x2; })preferredMenuAttachmentPoint;
- (struct CGSize { double x1; double x2; })preferredMenuSize;
- (unsigned long long)preferredPreviewFittingStrategy;
- (struct CGSize { double x1; double x2; })preferredPreviewSize;
- (void)setAccessoryViews:(id)arg1;
- (void)setPreferredAnchor:(struct { unsigned long long x1; unsigned long long x2; double x3; double x4; long long x5; })arg1;
- (void)setPreferredContentSpacing:(double)arg1;
- (void)setPreferredEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreferredMenuAttachmentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreferredMenuSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredPreviewFittingStrategy:(unsigned long long)arg1;
- (void)setPreferredPreviewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldAvoidInputViews:(bool)arg1;
- (void)setShouldConcealMenu:(bool)arg1;
- (void)setShouldUpdateAttachment:(bool)arg1;
- (void)setSourcePreview:(id)arg1;
- (bool)shouldAvoidInputViews;
- (bool)shouldConcealMenu;
- (bool)shouldUpdateAttachment;
- (id)sourcePreview;

@end
