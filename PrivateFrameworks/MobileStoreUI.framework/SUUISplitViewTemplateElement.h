
@interface SUUISplitViewTemplateElement : SUUIViewElement {
    SUUIJSDOMFeatureNavigationDocument * _leftNavigationDocument;
    long long  _preferredDisplayMode;
    SUUIJSDOMFeatureNavigationDocument * _rightNavigationDocument;
}

@property (readonly) SUUIJSDOMFeatureNavigationDocument *leftNavigationDocument;
@property (nonatomic, readonly) SUUIViewElement *leftSplitElement;
@property (nonatomic, readonly) long long preferredDisplayMode;
@property (readonly) SUUIJSDOMFeatureNavigationDocument *rightNavigationDocument;
@property (nonatomic, readonly) SUUIViewElement *rightSplitElement;
@property (nonatomic, readonly) bool usesInlineSplitContent;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)_splitElementForIndex:(long long)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)leftNavigationDocument;
- (id)leftSplitElement;
- (long long)preferredDisplayMode;
- (id)rightNavigationDocument;
- (id)rightSplitElement;
- (bool)usesInlineSplitContent;

@end
