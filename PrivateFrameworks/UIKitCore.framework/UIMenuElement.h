
@interface UIMenuElement : NSObject <NSCopying, NSSecureCoding> {
    UIAction * __accessoryAction;
    <_UIMenuImageOrName> * __imageOrName;
    NSString * __internalIdentifier;
    unsigned long long  __preferredDisplayMode;
    NSString * _accessibilityIdentifier;
    NSAttributedString * _attributedTitle;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, copy) UIAction *_accessoryAction;
@property (nonatomic, readonly) <_UIMenuImageOrName> *_imageOrName;
@property (nonatomic, copy) NSString *_internalIdentifier;
@property (nonatomic, readonly) bool _isLeaf;
@property (nonatomic, readonly) bool _isLoadingPlaceholder;
@property (setter=_setPreferredDisplayMode:, nonatomic) unsigned long long _preferredDisplayMode;
@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_acceptBoolMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3;
- (bool)_acceptBoolMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (void)_acceptMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3 deferredElementVisit:(id /* block */)arg4;
- (void)_acceptMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (id)_accessoryAction;
- (bool)_canBeHighlighted;
- (id)_customContentView;
- (id)_imageOrName;
- (id)_immutableCopy;
- (id)_internalIdentifier;
- (bool)_isInlineGroup;
- (bool)_isLeaf;
- (bool)_isLoadingPlaceholder;
- (bool)_isVisible;
- (id)_mutableCopy;
- (bool)_omitsInlineTitle;
- (unsigned long long)_preferredDisplayMode;
- (void)_setImage:(id)arg1;
- (void)_setPreferredDisplayMode:(unsigned long long)arg1;
- (void)_setSubtitle:(id)arg1;
- (void)_setTitle:(id)arg1;
- (void)_willBePreparedForInitialDisplay:(id)arg1;
- (id)accessibilityIdentifier;
- (id)attributedTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageName:(id)arg3;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)set_accessoryAction:(id)arg1;
- (void)set_internalIdentifier:(id)arg1;
- (id)subtitle;
- (id)title;

@end
