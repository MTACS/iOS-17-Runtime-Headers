
@interface SHSheetOptionsViewContext : NSObject {
    NSArray * _customizationGroups;
    UIViewController * _itemPreviewViewController;
}

@property (nonatomic, copy) NSArray *customizationGroups;
@property (nonatomic) UIViewController *itemPreviewViewController;

- (void).cxx_destruct;
- (id)customizationGroups;
- (id)description;
- (id)initWithCustomizationGroups:(id)arg1;
- (id)itemPreviewViewController;
- (void)setCustomizationGroups:(id)arg1;
- (void)setItemPreviewViewController:(id)arg1;

@end
