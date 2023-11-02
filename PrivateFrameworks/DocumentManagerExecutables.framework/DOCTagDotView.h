
@interface DOCTagDotView : UIView <DOCTagIconView> {
    bool  _adjustsSizeForContentSizeCategory;
    bool  _checked;
    CALayer * _checkmarkLayer;
    double  _defaultTagDimension;
    UIImageView * _dotView;
    DOCTag * _itemTag;
    UIImage * _itemTagImage;
    bool  _needsItemTagImageUpdate;
    NSArray * _notificationObservances;
    unsigned long long  _renderedTagVariant;
    NSLayoutConstraint * _tagDimensionConstraint;
}

@property (nonatomic, readonly) bool adjustsSizeForContentSizeCategory;
@property (nonatomic) bool checked;
@property (nonatomic, readonly) CALayer *checkmarkLayer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultTagDimension;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIImageView *dotView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DOCTag *itemTag;
@property (nonatomic, retain) UIImage *itemTagImage;
@property (nonatomic, readonly) bool needsItemTagImageUpdate;
@property (nonatomic, readonly) NSArray *notificationObservances;
@property (nonatomic) unsigned long long renderedTagVariant;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double tagDimension;
@property (nonatomic, readonly) NSLayoutConstraint *tagDimensionConstraint;

- (void).cxx_destruct;
- (void)_updateLayoutOfLayers;
- (void)_withoutAnimations:(id /* block */)arg1;
- (bool)adjustsSizeForContentSizeCategory;
- (bool)checked;
- (id)checkmarkLayer;
- (void)dealloc;
- (double)defaultTagDimension;
- (id)dotView;
- (id)initWithDefaultTagDimension:(double)arg1 adjustsSizeForContentSizeCategory:(bool)arg2;
- (id)itemTag;
- (id)itemTagImage;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (void)loadItemTagImageIfNecessary;
- (bool)needsItemTagImageUpdate;
- (id)notificationObservances;
- (unsigned long long)renderedTagVariant;
- (void)setChecked:(bool)arg1;
- (void)setItemTag:(id)arg1;
- (void)setItemTagImage:(id)arg1;
- (void)setNeedsItemTagImageUpdate;
- (void)setRenderedTagVariant:(unsigned long long)arg1;
- (double)tagDimension;
- (id)tagDimensionConstraint;
- (void)updateContents;
- (void)updateForChangedTraitsAffectingFonts;
- (void)updateLayoutOfLayers;

@end
