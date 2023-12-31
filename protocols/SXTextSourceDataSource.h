
@protocol SXTextSourceDataSource <NSObject>

@required

- (NSArray *)additionsForTextSource:(SXTextSource *)arg1;
- (<SXComponentTextStyle> *)componentTextStyleForTextSource:(SXTextSource *)arg1 inheritingFromDefaultStyles:(bool)arg2;
- (NSString *)contentSizeCategoryForTextSource:(SXTextSource *)arg1;
- (<SXComponentTextStyle> *)defaultComponentTextStyleForTextSource:(SXTextSource *)arg1;
- (NSArray *)defaultComponentTextStylesForTextSource:(SXTextSource *)arg1;
- (NSArray *)inlineTextStylesForTextSource:(SXTextSource *)arg1;
- (SXTextResizer *)textResizerForTextSource:(SXTextSource *)arg1;
- (SXComponentTextRules *)textRulesForTextSource:(SXTextSource *)arg1;
- (<SXTextStyle> *)textStyleForIdentifier:(NSString *)arg1;

@end
