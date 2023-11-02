
@interface UIKeyboardEmojiWellView : UIView <UIKeyboardEmojiDraggableViewDelegate> {
    bool  _activeSelection;
    NSIndexPath * _associatedIndexPath;
    UIView * _backgroundView;
    NSArray * _compositeImageRepresentation;
    struct CGSize { 
        double width; 
        double height; 
    }  _compositeImageSize;
    UIFont * _labelFont;
    bool  _selected;
    UIColor * _selectionBackgroundColor;
    NSString * _stringRepresentation;
    UILabel * _unreleasedBanner;
    bool  _unreleasedHighlight;
    UIView * _wellContentView;
}

@property (getter=isActiveSelection, nonatomic) bool activeSelection;
@property (nonatomic, retain) NSIndexPath *associatedIndexPath;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) NSArray *compositeImageRepresentation;
@property (nonatomic) struct CGSize { double x1; double x2; } compositeImageSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIFont *labelFont;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, retain) UIColor *selectionBackgroundColor;
@property (nonatomic, retain) NSString *stringRepresentation;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *unreleasedBanner;
@property (nonatomic) bool unreleasedHighlight;
@property (nonatomic, retain) UIView *wellContentView;

- (void).cxx_destruct;
- (id)associatedIndexPath;
- (id)backgroundView;
- (id)compositeImageRepresentation;
- (struct CGSize { double x1; double x2; })compositeImageSize;
- (void)dragWillBegin:(id)arg1;
- (id)fontUsingSilhouette:(unsigned long long)arg1 size:(double)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isActiveSelection;
- (bool)isSelected;
- (id)labelFont;
- (void)layoutSubviews;
- (id)selectionBackgroundColor;
- (void)setActiveSelection:(bool)arg1;
- (void)setAssociatedIndexPath:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setCompositeImageRepresentation:(id)arg1;
- (void)setCompositeImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLabelFont:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionBackgroundColor:(id)arg1;
- (void)setStringRepresentation:(id)arg1;
- (void)setStringRepresentation:(id)arg1 silhouette:(unsigned long long)arg2;
- (void)setUnreleasedBanner:(id)arg1;
- (void)setUnreleasedHighlight:(bool)arg1;
- (void)setWellContentView:(id)arg1;
- (id)stringRepresentation;
- (id)unreleasedBanner;
- (bool)unreleasedHighlight;
- (id)wellContentView;

@end
