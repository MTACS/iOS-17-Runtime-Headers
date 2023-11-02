
@interface _UIFulfilledContextMenuConfiguration : NSObject {
    NSArray * _accessoryViews;
    unsigned long long  _badgeCount;
    UIResponder * _firstResponderTarget;
    <NSCopying> * _identifier;
    NSSet * _internalIdentifiers;
    UIMenu * _menu;
    UIAction * _previewAction;
    UIViewController * _previewViewController;
    unsigned long long  _representedItemCount;
    NSArray * _secondarySourcePreviews;
    UITargetedPreview * _sourcePreview;
}

@property (nonatomic, retain) NSArray *accessoryViews;
@property (nonatomic) unsigned long long badgeCount;
@property (nonatomic) UIResponder *firstResponderTarget;
@property (nonatomic, copy) <NSCopying> *identifier;
@property (nonatomic, readonly) NSSet *internalIdentifiers;
@property (nonatomic, readonly) bool isMultiItemMenu;
@property (nonatomic, copy) UIMenu *menu;
@property (nonatomic, copy) UIAction *previewAction;
@property (nonatomic, retain) UIViewController *previewViewController;
@property (nonatomic) unsigned long long representedItemCount;
@property (nonatomic, retain) NSArray *secondarySourcePreviews;
@property (nonatomic, retain) UITargetedPreview *sourcePreview;

- (void).cxx_destruct;
- (id)accessoryViews;
- (unsigned long long)badgeCount;
- (id)firstResponderTarget;
- (id)identifier;
- (id)internalIdentifiers;
- (bool)isMultiItemMenu;
- (bool)isPresentable;
- (id)menu;
- (id)previewAction;
- (id)previewViewController;
- (unsigned long long)representedItemCount;
- (id)secondarySourcePreviews;
- (void)setAccessoryViews:(id)arg1;
- (void)setBadgeCount:(unsigned long long)arg1;
- (void)setFirstResponderTarget:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)setPreviewAction:(id)arg1;
- (void)setPreviewViewController:(id)arg1;
- (void)setPrimaryInternalIdentifier:(id)arg1 secondaryIdentifiers:(id)arg2;
- (void)setRepresentedItemCount:(unsigned long long)arg1;
- (void)setSecondarySourcePreviews:(id)arg1;
- (void)setSourcePreview:(id)arg1;
- (id)sourcePreview;

@end
