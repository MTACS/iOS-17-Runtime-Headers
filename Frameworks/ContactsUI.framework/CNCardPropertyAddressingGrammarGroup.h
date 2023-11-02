
@interface CNCardPropertyAddressingGrammarGroup : CNCardPropertyGroup

@property (nonatomic, readonly) bool shouldShowLanguageLabel;

- (bool)canAddEditingItem;
- (id)newEditingItemWithValue:(id)arg1;
- (Class)propertyGroupItemClass;
- (void)saveChanges;
- (bool)shouldKeepNoiseValue;
- (bool)shouldShowLanguageLabel;

@end
