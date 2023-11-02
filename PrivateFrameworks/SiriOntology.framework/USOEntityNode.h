
@interface USOEntityNode : USOGraphNode {
    void * _usoEntityNode;
}

- (void)addEntitySpan:(id)arg1;
- (void)addIdentifierWithValue:(id)arg1 appBundleId:(id)arg2 namespaceString:(id)arg3;
- (void)addIdentifierWithValue:(id)arg1 appBundleId:(id)arg2 namespaceString:(id)arg3 probability:(struct optional<double> { union { BOOL x_1_1_1; double x_1_1_2; } x1; bool x2; })arg4 nluComponent:(struct optional<siri::ontology::UsoIdentifier::NluComponent> { union { BOOL x_1_1_1; int x_1_1_2; } x1; bool x2; })arg5;
- (void)addIdentifierWithValue:(id)arg1 appBundleId:(id)arg2 namespaceString:(id)arg3 probability:(struct optional<double> { union { BOOL x_1_1_1; double x_1_1_2; } x1; bool x2; })arg4 nluComponent:(struct optional<siri::ontology::UsoIdentifier::NluComponent> { union { BOOL x_1_1_1; int x_1_1_2; } x1; bool x2; })arg5 groupIndex:(struct optional<unsigned int> { union { BOOL x_1_1_1; unsigned int x_1_1_2; } x1; bool x2; })arg6;
- (void)addIdentifierWithValue:(id)arg1 appBundleId:(id)arg2 namespaceString:(id)arg3 probability:(struct optional<double> { union { BOOL x_1_1_1; double x_1_1_2; } x1; bool x2; })arg4 nluComponent:(struct optional<siri::ontology::UsoIdentifier::NluComponent> { union { BOOL x_1_1_1; int x_1_1_2; } x1; bool x2; })arg5 groupIndex:(struct optional<unsigned int> { union { BOOL x_1_1_1; unsigned int x_1_1_2; } x1; bool x2; })arg6 interpretationGroup:(struct optional<unsigned int> { union { BOOL x_1_1_1; unsigned int x_1_1_2; } x1; bool x2; })arg7;
- (void)addUtteranceAlignmentWithAsrIndex:(unsigned int)arg1 StartIndex:(unsigned int)arg2 endIndex:(unsigned int)arg3 startUnicodeScalarIndex:(unsigned int)arg4 endUnicodeScalarIndex:(unsigned int)arg5;
- (id)initWithCppEntityNode:(void*)arg1;

@end
