
@protocol AVTAvatarAttributeEditorColorSection <AVTAvatarAttributeEditorSection>

@required

- (bool)alwaysShowExtended;
- (AVTAvatarColorVariationStore *)colorVariationStore;
- (NSArray *)extendedItems;
- (NSArray *)primaryItems;

@end
