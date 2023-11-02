
@interface UIContextMenuConfiguration : NSObject {
    id  __internalIdentifier;
    NSSet * __internalSecondaryItemIdentifiers;
    UITargetedPreview * __primarySourcePreview;
    NSArray * __secondarySourcePreviews;
    id /* block */  _actionProvider;
    long long  _badgeCount;
    UIResponder * _firstResponderTarget;
    <NSCopying> * _identifier;
    long long  _preferredMenuAlignment;
    long long  _preferredMenuElementOrder;
    bool  _prefersHorizontalAttachment;
    id /* block */  _previewProvider;
    NSSet * _secondaryItemIdentifiers;
}

@property (nonatomic, readonly) bool _clientDidSetBadgeCount;
@property (nonatomic, readonly) id _effectiveInternalIdentifier;
@property (nonatomic, readonly) NSSet *_effectiveSecondaryItemIdentifiers;
@property (nonatomic, retain) id _internalIdentifier;
@property (nonatomic, retain) NSSet *_internalSecondaryItemIdentifiers;
@property (nonatomic, readonly) bool _isMultiItemMenu;
@property (nonatomic, retain) UITargetedPreview *_primarySourcePreview;
@property (nonatomic, retain) NSArray *_secondarySourcePreviews;
@property (nonatomic, copy) id /* block */ actionProvider;
@property (nonatomic) long long badgeCount;
@property (nonatomic) UIResponder *firstResponderTarget;
@property (nonatomic, copy) <NSCopying> *identifier;
@property (nonatomic) long long preferredMenuAlignment;
@property (nonatomic) long long preferredMenuElementOrder;
@property (nonatomic) bool prefersHorizontalAttachment;
@property (nonatomic, copy) id /* block */ previewProvider;
@property (nonatomic, copy) NSSet *secondaryItemIdentifiers;

+ (id)configurationWithIdentifier:(id)arg1 previewProvider:(id /* block */)arg2 actionProvider:(id /* block */)arg3;

- (void).cxx_destruct;
- (bool)_clientDidSetBadgeCount;
- (id)_effectiveInternalIdentifier;
- (id)_effectiveSecondaryItemIdentifiers;
- (id)_internalIdentifier;
- (id)_internalSecondaryItemIdentifiers;
- (bool)_isCollectionViewBackgroundMenu;
- (bool)_isMultiItemMenu;
- (id)_primarySourcePreview;
- (id)_secondarySourcePreviews;
- (id /* block */)actionProvider;
- (long long)badgeCount;
- (id)firstResponderTarget;
- (id)identifier;
- (id)init;
- (long long)preferredMenuAlignment;
- (long long)preferredMenuElementOrder;
- (bool)prefersHorizontalAttachment;
- (id /* block */)previewProvider;
- (id)secondaryItemIdentifiers;
- (void)setActionProvider:(id /* block */)arg1;
- (void)setBadgeCount:(long long)arg1;
- (void)setFirstResponderTarget:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPreferredMenuAlignment:(long long)arg1;
- (void)setPreferredMenuElementOrder:(long long)arg1;
- (void)setPrefersHorizontalAttachment:(bool)arg1;
- (void)setPreviewProvider:(id /* block */)arg1;
- (void)setSecondaryItemIdentifiers:(id)arg1;
- (void)set_internalIdentifier:(id)arg1;
- (void)set_internalSecondaryItemIdentifiers:(id)arg1;
- (void)set_primarySourcePreview:(id)arg1;
- (void)set_secondarySourcePreviews:(id)arg1;

@end
