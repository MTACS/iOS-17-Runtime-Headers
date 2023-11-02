
@interface CNPropertyGroupAddressingGrammarItem : CNPropertyGroupItem {
    bool  _wasAdded;
}

@property (nonatomic, readonly) bool shouldShowLanguageLabel;
@property (nonatomic) bool wasAdded;

+ (id)emptyValueForLabel:(id)arg1;
+ (id)propertyGroupItemWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3;

- (bool)canReorder;
- (id)displayLabel;
- (id)displayStringForValue:(id)arg1;
- (bool)modified;
- (void)setWasAdded:(bool)arg1;
- (bool)shouldDisableLabelButton;
- (bool)shouldShowLanguageLabel;
- (bool)showValueWithLabelStyle;
- (bool)wasAdded;

@end
