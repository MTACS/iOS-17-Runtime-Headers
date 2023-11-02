
@interface SXConditionalResolverModifierInstructions : NSObject <SXConditionalResolverModifierInstructions> {
    <SXDocumentProviding> * _documentProvider;
    <SXHintsConfigurationOptionProvider> * _hintsConfigurationOptionProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentProviding> *documentProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXHintsConfigurationOptionProvider> *hintsConfigurationOptionProvider;
@property (nonatomic, readonly) bool shouldResolveAutoplacement;
@property (nonatomic, readonly) bool shouldResolveComponentLayouts;
@property (nonatomic, readonly) bool shouldResolveComponentStyles;
@property (nonatomic, readonly) bool shouldResolveComponentTextStyles;
@property (nonatomic, readonly) bool shouldResolveComponents;
@property (nonatomic, readonly) bool shouldResolveDocumentStyle;
@property (nonatomic, readonly) bool shouldResolveTextStyles;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)documentProvider;
- (id)hints;
- (id)hintsConfigurationOptionProvider;
- (id)initWithDocumentProvider:(id)arg1 hintsConfigurationOptionProvider:(id)arg2;
- (bool)shouldResolveAutoplacement;
- (bool)shouldResolveComponentLayouts;
- (bool)shouldResolveComponentStyles;
- (bool)shouldResolveComponentTextStyles;
- (bool)shouldResolveComponents;
- (bool)shouldResolveDocumentStyle;
- (bool)shouldResolveTextStyles;

@end
