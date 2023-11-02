
@interface SXDarkModeModifier : NSObject <SXDOMModifying> {
    <SXDarkModeConfiguration> * _configuration;
    <SXNamespacedObjectFactory> * _namespacedObjectFactory;
    <SXDarkModePolicyHandler> * _policyHandler;
}

@property (nonatomic, readonly) <SXDarkModeConfiguration> *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXNamespacedObjectFactory> *namespacedObjectFactory;
@property (nonatomic, readonly) <SXDarkModePolicyHandler> *policyHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configuration;
- (id)initWithPolicyHandler:(id)arg1 configuration:(id)arg2 namespacedObjectFactory:(id)arg3;
- (void)invertBackgroundColorsOfComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 context:(id)arg4;
- (void)invertBackgroundColorsOfTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 context:(id)arg4;
- (id)invertColor:(id)arg1 defaultColor:(id)arg2;
- (void)invertComponentStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 context:(id)arg4;
- (void)invertForegroundColorsOfComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 context:(id)arg4;
- (void)invertForegroundColorsOfTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3 context:(id)arg4;
- (id)invertedBorder:(id)arg1;
- (id)invertedComponent:(id)arg1 context:(id)arg2;
- (id)invertedComponentShadow:(id)arg1;
- (id)invertedComponentStyle:(id)arg1 context:(id)arg2;
- (id)invertedComponentTextStyleBackgroundColors:(id)arg1 context:(id)arg2;
- (id)invertedComponentTextStyleForegroundColors:(id)arg1 context:(id)arg2;
- (id)invertedDataTableBorder:(id)arg1;
- (id)invertedDataTableBorderSides:(id)arg1;
- (id)invertedDataTableCellStyle:(id)arg1;
- (id)invertedDataTableColumnStyle:(id)arg1;
- (id)invertedDataTableRowStyle:(id)arg1;
- (id)invertedDataTableStyle:(id)arg1;
- (id)invertedDocumentStyle:(id)arg1 context:(id)arg2;
- (id)invertedDropCapStyle:(id)arg1;
- (id)invertedGradientFill:(id)arg1;
- (id)invertedLinearGradient:(id)arg1;
- (id)invertedStrokeStyle:(id)arg1;
- (id)invertedTextDecoration:(id)arg1;
- (id)invertedTextShadow:(id)arg1;
- (id)invertedTextStroke:(id)arg1;
- (id)invertedTextStyleBackgroundColors:(id)arg1 context:(id)arg2;
- (id)invertedTextStyleForegroundColors:(id)arg1 context:(id)arg2;
- (void)modifyDOM:(id)arg1 context:(id)arg2;
- (id)namespacedObjectFactory;
- (id)policyHandler;

@end
