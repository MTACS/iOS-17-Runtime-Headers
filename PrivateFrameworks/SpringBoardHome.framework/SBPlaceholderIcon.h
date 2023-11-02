
@interface SBPlaceholderIcon : SBIcon {
    SBIcon * _icon;
    NSArray * _icons;
    id  _nodeIdentifier;
}

@property (nonatomic, readonly) SBIcon *referencedIcon;
@property (nonatomic, readonly, copy) NSArray *referencedIcons;

+ (id)clusteredIconPlaceholderForIcons:(id)arg1;
+ (id)grabbedIconPlaceholderForIcon:(id)arg1;
+ (id)grabbedIconPlaceholderForIcons:(id)arg1;
+ (bool)hasIconImage;
+ (id)placeholderForIcon:(id)arg1;
+ (id)placeholderForReason:(id)arg1;
+ (id)placeholderNodeIdentifierForIcon:(id)arg1;
+ (id)placeholderNodeIdentifierForIconNodeIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithNodeIdentifier:(id)arg1 icon:(id)arg2;
- (id)_initWithNodeIdentifier:(id)arg1 icons:(id)arg2;
- (id)automationID;
- (bool)canReceiveGrabbedIcon;
- (id)folder;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (id)genericIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (id)gridCellImage;
- (bool)isPlaceholder;
- (bool)isUninstallSupported;
- (id)nodeIdentifier;
- (id)referencedIcon;
- (id)referencedIcons;
- (bool)referencesIcon:(id)arg1;
- (bool)referencesIconWithIdentifier:(id)arg1;
- (void)updateReferencedIcons:(id)arg1;

@end
