
@protocol SXDOMObjectProviding <NSObject>

@required

- (<SXAutoPlacement> *)autoPlacement;
- (<SXComponentLayout> *)componentLayoutForIdentifier:(NSString *)arg1;
- (<SXComponentStyle> *)componentStyleForComponent:(id <SXComponent>)arg1;
- (<SXComponentTextStyle> *)componentTextStyleForIdentifier:(NSString *)arg1 classification:(SXComponentClassification *)arg2 component:(id <SXComponent>)arg3;
- (<SXComponentTextStyle> *)componentTextStyleForIdentifier:(NSString *)arg1 component:(id <SXComponent>)arg2;
- (<SXComponentTextStyle> *)componentTextStyleForIdentifier:(NSString *)arg1 inheritingFromComponentTextStyle:(SXComponentTextStyle *)arg2 component:(id <SXComponent>)arg3;
- (<SXComponentTextStyle> *)componentTextStyleForIdentifiers:(NSArray *)arg1 component:(id <SXComponent>)arg2;
- (SXComponents *)components;
- (<SXDocumentStyle> *)documentStyle;
- (<SXImageResource> *)imageResourceForIdentifier:(NSString *)arg1;
- (<SXResource> *)resourceForIdentifier:(NSString *)arg1;
- (<SXTextStyle> *)textStyleForIdentifier:(NSString *)arg1 component:(id <SXComponent>)arg2;

@end
