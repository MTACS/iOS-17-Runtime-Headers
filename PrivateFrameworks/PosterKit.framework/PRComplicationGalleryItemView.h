
@interface PRComplicationGalleryItemView : UIView <UIDragInteractionDelegate> {
    <PRComplicationGalleryItemViewDelegate> * _delegate;
    UIImageView * _iconImageView;
    UILabel * _label;
    MTMaterialView * _widgetBackgroundView;
    CHUISWidgetHostViewController * _widgetHostViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRComplicationGalleryItemViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *iconImage;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) CHUISWidgetHostViewController *widgetHostViewController;

- (void).cxx_destruct;
- (void)_addDragInteraction;
- (bool)_descendantsShouldHighlight;
- (id)delegate;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (id)iconImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setWidgetHostViewController:(id)arg1;
- (id)title;
- (id)widgetHostViewController;

@end
