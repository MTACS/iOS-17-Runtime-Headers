
@protocol SXConditionalResolverModifierInstructions <NSObject>

@required

- (bool)shouldResolveAutoplacement;
- (bool)shouldResolveComponentLayouts;
- (bool)shouldResolveComponentStyles;
- (bool)shouldResolveComponentTextStyles;
- (bool)shouldResolveComponents;
- (bool)shouldResolveDocumentStyle;
- (bool)shouldResolveTextStyles;

@end
