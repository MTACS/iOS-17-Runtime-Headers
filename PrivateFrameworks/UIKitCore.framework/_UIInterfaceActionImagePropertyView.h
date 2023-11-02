
@interface _UIInterfaceActionImagePropertyView : UIImageView <UIInterfaceActionDisplayPropertyObserver> {
    UIInterfaceAction * _action;
    NSLayoutConstraint * _imageHeightConstraint;
    NSString * _imageProperty;
    NSLayoutConstraint * _imageWidthConstraint;
}

@property (nonatomic, readonly) UIInterfaceAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *imageProperty;
@property (nonatomic, readonly) bool isUsedToOccupySpaceIfNoImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyVisualStyle;
- (void)_applyVisualStyleToImageView;
- (id)_interfaceActionViewState;
- (void)_reloadImageContent;
- (struct CGSize { double x1; double x2; })_sizeToOccupy;
- (id)_visualStyle;
- (id)action;
- (void)dealloc;
- (id)imageProperty;
- (id)initWithAction:(id)arg1 imageProperty:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (bool)isUsedToOccupySpaceIfNoImage;
- (void)setImage:(id)arg1;
- (void)tintColorDidChange;

@end