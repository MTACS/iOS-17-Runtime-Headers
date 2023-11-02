
@interface WFChooseFromListDialogCell : UITableViewCell <UIPointerInteractionDelegate> {
    bool  _checked;
    WFListDisplayConfiguration * _displayConfiguration;
    MTVisualStylingProvider * _fillVisualStylingProvider;
    NSCache * _imageCache;
    WFDialogListItem * _listItem;
    TLKSimpleRowView * _rowView;
}

@property (getter=isChecked, nonatomic) bool checked;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFListDisplayConfiguration *displayConfiguration;
@property (nonatomic, retain) MTVisualStylingProvider *fillVisualStylingProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSCache *imageCache;
@property (nonatomic, retain) WFDialogListItem *listItem;
@property (nonatomic) TLKSimpleRowView *rowView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)displayConfiguration;
- (id)fillVisualStylingProvider;
- (id)imageCache;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isChecked;
- (void)layoutSubviews;
- (id)listItem;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)rowView;
- (void)setChecked:(bool)arg1;
- (void)setDisplayConfiguration:(id)arg1;
- (void)setFillVisualStylingProvider:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setListItem:(id)arg1;
- (void)setRowView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)tlkCornerRoundingStyleForWFRoundingStyle:(unsigned long long)arg1;

@end
